#include "HID-Project.h"
#include <Arduino_LSM6DS3.h>

void setup() {
  // put your setup code here, to run once:
  //Serial.begin(9600);
  // while (!Serial);

  if (!IMU.begin()) {
    //Serial.println("Failed to initialize IMU!");

    while (1);
  }

  // Serial.print("Accelerometer sample rate = ");
  // Serial.print(IMU.accelerationSampleRate());
  // Serial.println(" Hz");
  // Serial.println();
  //Serial.println("Acceleration in G's");
  //Serial.println("X\tY\tZ");

  Gamepad.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  float x, y, z;
  uint16_t raw_x, raw_y, raw_z;

  if (IMU.accelerationAvailable()) {
    IMU.readAcceleration(x, y, z);
    raw_x = (x/4)*32000;
    raw_y = (y/4)*32000;
    raw_z = (z/4)*32000;
    // Serial.println(x + '\t' + y + '\t' + z);
    // Move x/y Axis to a new position (16bit)
    
  }
  Gamepad.xAxis(raw_x);
  Gamepad.yAxis(raw_y);
  Gamepad.write();
  delay(10);
}
