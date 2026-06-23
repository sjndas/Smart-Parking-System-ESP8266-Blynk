# Smart Parking System

## Technologies
ESP8266, Ultrasonic Sensor, Blynk, Arduino IDE

## Features
- Detects vehicle presence using an ultrasonic sensor.
- Sends parking status to the Blynk mobile application.
- Displays parking slot availability in real time.
- Enables remote monitoring through Wi-Fi.

## Components Used
- ESP8266 NodeMCU
- HC-SR04 Ultrasonic Sensor
- Wi-Fi Network
- Blynk Cloud

## Working Principle
1. The ultrasonic sensor measures the distance to detect vehicle presence.
2. If the distance is below a threshold, the parking slot is marked as occupied.
3. Otherwise, the slot is marked as vacant.
4. The status is sent to Blynk over Wi-Fi.
5. Users can monitor parking availability from the Blynk mobile app or web dashboard.

## Author
Sajindas M
