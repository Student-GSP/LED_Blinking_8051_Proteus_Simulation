# LED_Blinking_8051_Proteus_Simulation

# 8051 LED Blinking Patterns using Embedded C

## Project Overview
This project demonstrates different LED blinking patterns using the 8051 (AT89S52) Microcontroller programmed in Embedded C. LEDs are connected to Port 2 (P2), and various binary patterns are generated to control the LEDs. The project was simulated and verified using Proteus Design Suite.

## Features
- All LEDs ON/OFF Pattern
- Half LEDs ON/OFF Pattern
- Pair-wise LED Blinking
- Odd/Even LED Blinking
- Software Delay Implementation
- GPIO Port Control using Embedded C

## Components Used
- 8051 (AT89S52) Microcontroller
- LEDs (8)
- Resistors (8.k,330ohm)
- Capacitors (10uF, 33pF)
- Crystal Oscillator (11.0592)
- Power Supply Circuit

## Software & Tools
- Embedded C
- Keil uVision
- Proteus Design Suite

## Working Principle
The microcontroller continuously sends different hexadecimal values to Port 2 (P2), creating various LED blinking patterns.

| Hex Value | Pattern Description |
|------------|-------------------|
| 0xFF | All LEDs ON |
| 0x00 | All LEDs OFF |
| 0x0F | Lower 4 LEDs ON |
| 0xF0 | Upper 4 LEDs ON |
| 0x33 | Pair LEDs ON |
| 0xCC | Alternate Pair LEDs ON |
| 0x55 | Odd LEDs ON |
| 0xAA | Even LEDs ON |

A delay function is used between each pattern to make the blinking visible.

## Simulation
The complete circuit was designed and tested in Proteus Design Suite. The simulation verified the correct operation of all LED patterns before hardware implementation.

## Learning Outcomes
- 8051 Microcontroller Programming
- Embedded C Development
- GPIO Port Programming
- LED Interfacing
- Software Delay Generation
- Proteus Circuit Simulation
## Circuit Design

<img width="1600" height="713" alt="Proteus_Circut_Design" src="https://github.com/user-attachments/assets/7335cd31-b9d8-4f96-a065-d8afaf382a9c" />

## Output

https://github.com/user-attachments/assets/e0420b47-1307-4122-be74-e16fe838c804

