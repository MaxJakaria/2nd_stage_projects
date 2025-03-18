## [1st Assignment](https://github.com/MaxJakaria/2nd_stage_projects/tree/23251ae5723758bfc1c4dd74095b5624c02c8591)

-> This is a blinking LED project....

## [2nd Assignment](https://github.com/MaxJakaria/2nd_stage_projects/tree/559fe8156fc74596479d90d5cdf2c6e5ba1c6983)

-> Digital and analog reading: In this project I use a load, EasyComMini and a light sensor. Were the sensor given analog signal and the wifi module produce digital signal. I use a mobile app which is control the wifi module as a switch.

## [3rd Assignment](https://github.com/MaxJakaria/2nd_stage_projects/tree/90ae6a5c4ee31f03d2bbba15261b904f4b23b4bb)

> **This code required a library. For install that library go platformio.ini file and write _"lib_deps = IRremote"_. After that save the file, the library will automatically install.**

-> IR Remote: [First of all, I have to find the button code of my remote.](https://github.com/MaxJakaria/2nd_stage_projects/tree/42862aa0cc734ac78a88c60856870a76d224b040)
For this project I have used 4 loads, IR Remote and an IR receiver. Where the loads are control with IR remote.

## 4th Assignment

-> LCD Display: [First of all, I have to scan the device address with i2c scanner](https://github.com/MaxJakaria/2nd_stage_projects/tree/9dc33b75b9ece69dfbaa9b6680fcc7c40dc704b9). Reference: [YouTube](https://www.youtube.com/watch?v=acTGCaNllxI)

> **This code required a library: _LiquidCrystal_I2C_ by Frank de Brabander**

Connect LCD display to esp32: **SDA-->D21, SCL-->D22, VCC-->VIN**.
It was a simple project. Just print something on the LCD display. Here I print a light sensor value...
