# Zelbytes Arduino Project

## Developer Information

**Name:** MISHA JOHNSON  
**Board Type:** Arduino Uno R3  
**COM Port:** COM 10  

## Day 2 Status

- Digital I/O configured successfully
- External LED control implemented
- Push button connected using `INPUT_PULLUP`
- Software debounce implemented using `millis()`
- LED toggles on stable button press
- Serial debugging enabled at 9600 baud
- Button press events verified successfully

## Hardware Configuration

| Component | Arduino Pin |
|----------|-------------|
| LED | Pin 13 |
| Push Button | Pin 2 |
| Button Mode | INPUT_PULLUP |

## Code Features

- Non-blocking debounce technique
- Active-low button logic
- LED state toggle control
- Serial Monitor output using:
