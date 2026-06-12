# Task 5: Threshold Logic and State Machine for Smart Irrigation

## Project Title

Smart Irrigation System Using Threshold Logic and Finite State Machine

---

## Overview

This project implements an automatic irrigation controller using Arduino Uno.  
The system monitors soil moisture and environmental conditions and controls irrigation using a relay and solenoid valve.

A finite state machine is used to manage different operating modes and provide reliable irrigation control.

---

## Objective

- Monitor soil moisture conditions.
- Automatically start irrigation when soil becomes dry.
- Stop irrigation when required moisture level is reached.
- Monitor temperature and humidity using DHT22.
- Provide safe operation using fault detection and cooldown control.

Hardware Used

| Component | Purpose |
|---|---|
| Arduino Uno R3 | Main controller |
| Soil Moisture Sensor | Detects soil water level |
| DHT22 Sensor | Temperature and humidity monitoring |
| Relay Module | Controls valve power |
| Solenoid Valve | Controls water flow |
| LED | Irrigation status indication |
| 220Ω Resistor | LED protection |

---

## Working Principle

The Arduino continuously reads:

- Soil moisture value
- Temperature
- Humidity

When soil moisture falls below the minimum threshold:
