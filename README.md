# Arduino Gas Sensor Code

## Description
This Arduino code is designed to read data from five gas sensors connected to an Arduino board. The sensors include MQ8, MQ4, MQ9, MQ7, and MQ135. The code reads analog data from these sensors and sends it over the serial port in a formatted manner.

## How to Use
To use this Arduino code:

1. **Obtain the Code:**
   - Clone or download this repository to your local machine.

2. **Setup Arduino:**
   - Ensure you have the Arduino IDE installed on your system.
   - Connect your Arduino board (Arduino Due in this case) to your computer.

3. **Upload the Code:**
   - Open the `gas_sensor_arduino_code.ino` file in the Arduino IDE.
   - Verify and upload the code to your Arduino board.

4. **Connect the Sensors:**
   - Connect the gas sensors (MQ8, MQ4, MQ9, MQ7, and MQ135) to the analog pins of the Arduino as follows:
     - MQ8: A0
     - MQ4: A1
     - MQ9: A2
     - MQ7: A3
     - MQ135: A4

5. **Interfacing with Interface Repository:**
   - Note that this Arduino code is intended to work with the Python interface script [available in another repository.](https://github.com/DevDevvy/arduino_gas_sensor_plotter)
   - Follow the instructions in the README of the interface repository to set up and run the Python script.

6. **Testing:**
   - Once uploaded, the Arduino will continuously read data from the sensors and send it over the serial port.
   - You can monitor the serial output using the serial monitor in the Arduino IDE (baud rate: 9600) to ensure correct functioning.

7. **Data Transmission:**
   - The data sent over the serial port will be read by the Python interface script, processed, and stored for further analysis or visualization.

## Notes
- Ensure proper connections between the Arduino board and the gas sensors to avoid errors in sensor readings.
- Make sure to power the Arduino board appropriately.
- For detailed instructions on connecting the gas sensors and understanding the output, refer to the datasheets of the respective sensors.

## License
This code is provided under the [MIT License](LICENSE).
