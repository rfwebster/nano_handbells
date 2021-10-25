# micro_handbells
Inspired by Simon's writeup on making microcontroller handbells for practice at home using abel simulator [1] I purchased 2 Arduino Nano 33 IOT boards. 
These seemed ideal due to the inbuilt IMU meaning I didn't need to buy a soldering iron. 
However, due to differences in microprocessors and IMU sensors these weren't compatible with Simon's code, so I wrote some more, albeit very similar to [1].
I then use the excellent handbell stadium to interface with 

# set up HID
by default windows 10 uses the wrong driver for the HID, so go to device manager, find the arduino nano, update drivers then find on PC - there should be a 'USB Input Device' option. 
Install that and you're good to go.

## Dependencies
 - NicoHoo HID library [2]
 - Arduino_LSM6DS3 [3]

## References
[1] https://www.handbellringing.co.uk/blog/update-on-handbell-controllers
[2] https://github.com/NicoHood/HID
[3] https://github.com/arduino-libraries/Arduino_LSM6DS3
