# DS18B20 Temperature Sensor Using Dallas Temperature

Dallas Temperature IC Control Library Demo IC Control Library Demo

Code uses [OneWire.h]

## Dallas Temperature Control Library vs DFRobot

We also used code from [DFRobot-DS18B20](https://github.com/jwilleke/DFRobot-DS18B20) and found the Dallas Temperature Control Library has more features and seems to be easier to use.

## We statred with the code

[Arduino-Temperature-Control-Library](https://github.com/milesburton/Arduino-Temperature-Control-Library)

## Device

We used this [Gravity: Waterproof DS18B20 Temperature Sensor Kit](https://www.dfrobot.com/product-1354.html)

## I statred with the code

[SKU:DFR0198 Waterproof DS18B20 Sensor Wiki](https://wiki.dfrobot.com/Waterproof_DS18B20_Digital_Temperature_Sensor__SKU_DFR0198_) and added few things like 
getTempF(celsius) tp get Fahrenheit from Celsius value.

## Arduino can not deal with high precision numbers

The float data type has only 6-7 decimal digits of precision. That means the total number of digits, not the number to the right of the decimal point. Unlike other platforms, where you can get more precision by using a double (e.g. up to 15 digits), on the Arduino, __double is the same size as float__.

We have been aunable to get any Celsius to Fahrenheit calculations to be accurate.

The Dallas Temperature Control Library does return much more accurate results.

## Dallas Temperature Control Library vs DFRobot

Dallas Temperature Control Library has more features and seems to be easier to use.

## Expected Output

``` bash
# DFRobot
24.00 Celsius 75.20 Fahrenheit
24.00 Celsius 75.20 Fahrenheit
23.94 Celsius 73.40 Fahrenheit
23.87 Celsius 73.40 Fahrenheit
23.81 Celsius 73.40 Fahrenheit
23.75 Celsius 73.40 Fahrenheit
# Dallas Temperature Control Library
===============================================================================
Dallas Temperature IC Control Library Demo
Locating devices...Found 1 devices.
Parasite power is: OFF
Found device 0 with address: 288FC98B0F000013
Setting resolution to 12
Resolution actually set to: 12
===============================================================================
Requesting temperatures...DONE Temperature for device: 0 - Temp C: 19.62 Temp F: 67.32
Requesting temperatures...DONE Temperature for device: 0 - Temp C: 19.62 Temp F: 67.32
Requesting temperatures...DONE Temperature for device: 0 - Temp C: 19.62 Temp F: 67.32
Requesting temperatures...DONE Temperature for device: 0 - Temp C: 19.62 Temp F: 67.32
```
