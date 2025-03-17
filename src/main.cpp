#include <IRremote.hpp>

const int IR_RECIVER_PIN = 15;

void setup()
{
  Serial.begin(115200);
  IrReceiver.begin(IR_RECIVER_PIN, ENABLE_LED_FEEDBACK);
}

void loop()
{
  if (IrReceiver.decode())
  {
    String ir = String(IrReceiver.decodedIRData.command, HEX);
    Serial.println(ir);

    IrReceiver.resume();
  }
}
