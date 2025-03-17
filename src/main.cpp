#include <IRremote.hpp>

const int IR_RECEIVER_PIN = 15;
const int pins[] = {27, 14, 12, 13};
bool checkStatus[] = {false, false, false, false};

void setup()
{
  for (int i = 0; i < 4; i++)
  {
    pinMode(pins[i], OUTPUT);
  }
  Serial.begin(115200);
  IrReceiver.begin(IR_RECEIVER_PIN, ENABLE_LED_FEEDBACK);
}

void loop()
{
  if (IrReceiver.decode())
  {
    String ir = String(IrReceiver.decodedIRData.command, HEX);
    Serial.println(ir);

    if (ir == "40")
    {
      for (int i = 3; i >= 0; i--)
      {
        if (checkStatus[i])
        {
          digitalWrite(pins[i], LOW);
          checkStatus[i] = false;
          break;
        }
      }
    }

    if (ir == "c")
    {
      digitalWrite(pins[0], HIGH);
      checkStatus[0] = true;
    }
    if (ir == "18")
    {
      digitalWrite(pins[1], HIGH);
      checkStatus[1] = true;
    }
    if (ir == "5e")
    {
      digitalWrite(pins[2], HIGH);
      checkStatus[2] = true;
    }
    if (ir == "8")
    {
      digitalWrite(pins[3], HIGH);
      checkStatus[3] = true;
    }

    IrReceiver.resume();
  }
}
