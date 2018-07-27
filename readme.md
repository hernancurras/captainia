Capitania Project 
================


Capitania is an Autonomous Autopilot 
------------------------------------------------------
* Capitania sensors/actuators are managed by Arduino.
* Capitania Planner is based on Python, with a Real Time Queue engine, based to run on Raspberry Pi with ROS (Robotic Operative System)
* Integration_v1 is the first version of the I/O board developed for Arduino.

MainBoard. 
------------------------------------------------------
* RaspberryPI 3+ using ROS (Robotic Operative System)
* Telemetry. RF APC220 TX-RX, a full-duplex 100mW 966 Mhz telemetry long range device.
[RF APC220 TX-RX](http://www.dfrobot.com/image/data/TEL0005/APC220_Manual_en.pdf "RF APC220 TX-RX")
* ND-100 secondary GPS USB

Sensors. Created from a Arduino Nano (Work in progress to move to a MEGA)
------------------------------------------------------

Boat, actually is just the hardware need, a hull, a bulb, a sail

2. Windvane (AS5030), to get the wind direction, analog sensor >1.8*2 degrees of error.
[AS5030](http://ams.com/eng/content/download/11929/212604/AS5030_Datasheet_v2-3.pdf "AS5030_Datasheet_v2-3.pdf")
3. GPS (SkyNav SKM53 DS), a regular GPS COM 9600bps, 40Channels.
[SkyNav SKM53 DS](www.nooelec.com/files/SKM53_Datasheet.pdf "SkyNav SKM53 DS")
5. SDCARD, Storage MicroSD device.
6. Compass, a classic HMC5883L (migrated soon to a tilt compensated one) using I2C interface. 
7. 9DOF replacing HCM5883L adding Barometric Sensor + Temperature
8. Volt Meter (Monitor Battery Status LiPO 3S 11.1v-12.60v 25C 2500mhA) 
9. Current Meter (Less than 10A including actuators)

Actuators. Created from a Arduino Nano
------------------------------------------------------

i.   Radio Control PPM Receiver
ii.  Status Led / LCD Matrix Display
iii. Servo Rudder
iv.  Servo Sailwinch
v.   Serial Remote console. (not yet implemented)


References
------------------------------------------------------
http://ww1.microchip.com/downloads/en/DeviceDoc/Atmel-42735-8-bit-AVR-Microcontroller-ATmega328-328P_Datasheet.pdf
http://www.brokking.net/rpas_main.html




~                                                            
