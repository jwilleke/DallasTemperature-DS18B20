#pragma once

// Jims Short cuts
#define DBAR "==============================================================================="
// SERIAL_BAUD_RATE
#define SERIAL_BAUD_RATE 115200
//Serial print switch
#define DEBUG_AVR
#define DEBUG_M0

//The maximum length of the sensor filter array
#define ARRAYLENGTH 10

//SD card update data time, 60,000 is 1 minute
#define SDUPDATEDATATIME 60000

//EC sensor is selected by default, comment this line to use TDS sensor
#define SELECTEC 

/*
Hardware ping addreses
Sensor pin settings
*/
#define DOPIN  A0
#define TDSPIN A1
#define PHPIN  A2
#define ORPPIN A3
#define ECPIN  A5
#define TEMPPIN 2
#define DS18S20PIN 2


//Set sensor offset (calibration data)
#define PHOFFSET 0.12
#define ECKVALUE 0.6

//The maximum number of sensors
#define SENSORCOUNT 5

//The sensor corresponds to the array number, ph=0, temperature=1..., the maximum number is SENSORCOUNT-1
enum SensorNumber
{
	phSensor = 0,
	temperatureSensor = 1,
	doSensor = 2,
	ecSensor = 3,
	tdsSensor = 5,
	orpSensor = 4,
  airTemp = 6
};

/**
 * DS18S20 Temperature Probe(s)
*/

#define TEMPERATURE_ONE_WIRE_BUS 2 // Data wire is pin on the Arduino
#define TEMPERATURE_PRECISION 12 // DS18S20 Temperature resolution