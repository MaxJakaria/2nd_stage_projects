#include <LiquidCrystal_I2C.h>

// Set the number of columns and rows for the LCD
int lcdColumns = 16;
int lcdRows = 2;
const int LIGHT_PIN = 15;

// Create an LCD object with the I2C address, columns, and rows
LiquidCrystal_I2C lcd(0x27, lcdColumns, lcdRows);

void setup()
{
  lcd.init();
  lcd.backlight(); // Turn on the LCD backlight
  lcd.setCursor(0, 0);
  lcd.print("....CEO....");
  lcd.setCursor(0, 1);
  lcd.print("JAKARIA");
  delay(3000);
}

void loop()
{
  lcd.setCursor(0, 0); // Set the cursor to the first column, first row
  lcd.print("Light value:");
  lcd.print(analogRead(LIGHT_PIN));

  lcd.setCursor(0, 1); // Set the cursor to the first column, second row
  lcd.print("Hello World!");
  delay(500);
}