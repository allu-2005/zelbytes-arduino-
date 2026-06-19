System Working

The Arduino continuously monitors soil moisture, temperature, and humidity.

1. Soil moisture is checked.
2. If soil moisture drops below the minimum threshold:
   - System changes to IRRIGATING state.
   - Relay turns ON.
   - Solenoid valve opens.
   - LED turns ON.

3. When soil reaches the target moisture level:
   - Relay turns OFF.
   - Valve closes.
   - LED turns OFF.

4. If the DHT22 sensor fails repeatedly:
   - System enters FAULT state.
   - Irrigation is disabled for safety.

The project demonstrates automatic irrigation control using sensors, relay switching, and state-based decision logic.
