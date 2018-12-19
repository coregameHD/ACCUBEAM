# ACCUBEAM
Laser dart game based on LPCXpresso LPC1679

![Accubeam Logo](https://i.imgur.com/bQljd3E.png)


# Introduction
## Project Description
The Accubeam project is a recreational laser game project featuring the LPCXpresso LPC1769 as the microcontroller. The game is controlled by pointing the laser pointer at the LDR light sensors attached to 3 target discs which, when ‘hit’ by the laser beam, will activate its respective servo to tilt the target down, marking the target as being hit.

## Purpose
The aim of this project can be considered in two points of view: the target audiences of the project and the developers of the project. For the target audiences of the project, the project aims to provide a simple and fun toy offering both entertainment and an insight into how one could contruct a simple interactive toy with electronics. For us developers, the aim was for us to discover the capabilities of the LPCXpresso LPC1769 microcontroller, along with LDR sensors and servos, in creating a project involving the relationship between sensor value detection, and the actuation of actuators, in this case being the servos.


# Motivation
## Drive
The main driving factor for creating this project was, as described earlier as the purpose of the project, to experiment and explore the capabilities of the LPC1769 microcontroller, as well as to better understand the sensor-actuator relationship in a hardware project. The supporting driving factor in selecting this project topic was to better our understanding of working with hardware components.

## Justification
As software engineering students, sometimes we may overlook the importance of hardware knowledge, even though it is very beneficial for us to have at least a basic background of the topic, and I believe the goal of the course was to provide a solution for said issue too, which is why it had become a driving force to work on this project.


# Hardware
## Equipment
### Core Components
* LPCXpresso LPC1769
* x2 Light Dependent Resistors (LDRs)
  * To read the light value coming from the sensor to be used
  * to determine whether or not the target has been hit.
* x2 Servos
  * To be activated when the LDR sensor reads a value over the preconfigured threshold to mark that the target has been hit.
  
### Additional Components
* Cabling and Breadboard
  * For connecting the components together.
* Power Adapter
  * For powering the servos and LDR light sensors.


# Software
## Implementation
The code for the project was written using the LPCXpresso IDE on our laptops, and was written in the C/C++ programming language, with the addition of the ‘mbed.h’ external library for extra variables and functions required to control the components, such as AnalogIn and PwmOut.

Our program uses polling to check for the sensor value in order to update the value in realtime to the program. Polling was selected to be the implementation used in our project as it was the appropriate method to use for our project in that each of the sensors and actuators are only set to perform one task, so there is no requirement for context switching.
