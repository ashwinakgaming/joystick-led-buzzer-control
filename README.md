# Joystick Controlled Direction System

## Overview

This project uses a joystick module to control directional LEDs and a buzzer. It demonstrates real-time analog input processing and direction-based output control.

## Objective

* Read joystick analog inputs
* Detect movement direction (X and Y axis)
* Indicate direction using LEDs
* Trigger buzzer using joystick button

## Components Used

* Arduino UNO
* Joystick Module (VRx, VRy, SW)
* LEDs (4)
* Buzzer

## Pin Configuration

* X-axis → A0
* Y-axis → A1
* Switch → D2
* Forward LED → D8
* Backward LED → D9
* Left LED → D10
* Right LED → D11
* Buzzer → D12

## Working Principle

* Joystick provides analog values (0–1023)
* Thresholds determine movement direction:

  * Y > 700 → Forward
  * Y < 300 → Backward
  * X < 300 → Left
  * X > 700 → Right
* Button press activates buzzer

## Features

* Real-time direction detection
* LED-based visual feedback
* Buzzer alert system

## Applications

* Robot direction control
* Gaming interfaces
* Remote navigation systems

## Future Improvements

* Motor control integration
* Wireless control system
* Display output using LCD
