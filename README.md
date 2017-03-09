# Motor Tester

This project houses the code for the Motor Tester test bench. The purpose of the Motor Tester is to provide a simple bench to just check that various sensors and motors work, and experiment with using them.

## Installation

TODO: Describe the installation process

## Usage

### Testing Motors

Plug a motor into the motor controller on the side of the test bench, turn the bot on, and hold the bumper switch to test if the motor is working or not. If the motor is properly functioning, it should start spinning once the bumper switch is pressed.

### Testing Sensors

Since this is basically a blank cortex, this test bench is perfect for experimenting with sensors, checking their values, and seeing if they are working properly.

1) Plug the sensor into the proper port
2) Go into RobotC, config that sensor in "Motor and Sensor Setup".
3) Download this code to the robot.
4) In RobotC: Robot > Open Debugger Manually and then Robot > Debugger Windows > Sensors
5) Use this panel to monitor sensor values and check if they work.

## Protocol

The test bench is publicly available in the robotics room, stored with the other test bench robots. As such, we request that after you finish using it, you revert the code back to the original code (remove all of your testing code), remove all sensors and motors you attached, and put it back in its proper place.
