# Fan-Project

Final project for CS 193 class. A temperature controlled fan system using Arduino and C++.

# The Problem:
To create a temperature dependent DC motor driven fan and explore how software and hardware interacts with one another. To plot the data related to temperature, fan state, etc.

# MVP scope

1. A basic temperature controlled fan that turns on automatically when a certain temperature condition is met
2. Should accurately read temperature data from the surroundings with minimal noise
3. Should log temperature and motor data from the components

# Future Plans (For V2.0+)

1. Temperature dependent speed factor
2. Multiple Fans working synchronously
3. Manual speed changer

# Tech Stack

1. Arduino IDE (C++)
2. Python (for data logging)
3. Google Doc - For Documentation
4. Youtube - for documentation
5. draw.io (diagram)
6. CSV (For data logging and data storage)

# Software Setup and Installation (FOR CS 193 GRADING THIS ASSIGNMENT):

## 1. Clone the Repository

First, make sure Git is installed on your computer.

Download Git:
https://git-scm.com/downloads

Open Command Prompt or the VS Code terminal and run:

```bash
git clone <repository-url>
```
## 2. Install Python
The data visualization program requires Python to run.

The data visualization program requires Python.

1. Visit https://www.python.org/downloads/
2. Download the latest stable Python release for Windows.
3. Run the installer.
4. Make sure to select **Add Python to PATH** during installation.
5. Complete the installation.

Verify that Python is installed by running:

```bash
py --version
```
## 3. Install Required Python Packages

The project uses the following Python libraries:

| Package | Purpose |
|---|---|
| pandas | Reads and processes CSV data |
| matplotlib | Generates data visualizations |

Install both packages using pip:

```bash
py -m pip install pandas matplotlib
```

To verify the installation:

```bash
py -m pip show pandas
py -m pip show matplotlib
```

## 4. Running the data visualization program

Navigate to the `src` directory after cloning the repository.

Run the Python visualization program:

```bash
py data_grapher.py
```
This program will collect the data from the `data.csv` file and output a scatterplot graph of Temperature vs Motor State.
# How it works

 



## Software Side (For CS 193 Grading):
- The Arduino IDE outputs the temperature as well as the motor state (ON or OFF) while the microcontroller is running. This text was then saved to a `data.csv` file which is available in the `src` directory.
- This data is then graphed in the form of a scatterplot where 0 represents OFF and 1 represents ON.
- The X axis indicates the Temperature (in C) and the y axis represents a binary value of either 0 or 1 which represents OFF or ON respectively.
- The data is read from the `data.csv` file and then plotted using mathplotlib.

## Hardware Side:
- Power Supply: Two AA batteries connected in series provide approximately 3V of external power to the DC motor.

- Temperature Sensing: The TMP36 measures the surrounding temperature and produces an analog voltage corresponding to the measured temperature.

- Analog Input: The TMP36 sends its output voltage to Arduino analog pin A0, where the Arduino reads the signal.

- Temperature Conversion: The Arduino converts the analog reading into a temperature measurement in degrees Celsius.

- Motor Control: Based on the measured temperature, the Arduino sends a HIGH or LOW signal through digital pin 9, which controls the Gate of the IRLZ44N MOSFET.

- MOSFET Switching: The MOSFET acts as an electronic switch. When the Gate receives a HIGH signal, the MOSFET allows current to flow through the motor. When it receives a LOW signal, the MOSFET stops conducting.

- Motor Operation: When activated, current flows from the external battery's positive terminal, through the DC motor, and through the MOSFET to ground. This powers the motor and spins the fan blades.

- Common Ground: The battery negative terminal, Arduino GND, TMP36 GND, and MOSFET Source share a common ground connection. This provides a common electrical reference for the control and power circuits.

- Temperature-Based Automation: The fan automatically switches ON when the measured temperature exceeds the programmed threshold and switches OFF when the temperature falls below it.


# Roadmap Checklist
- [x] **Working MVP:** Built a temperature-controlled fan that automatically turns ON/OFF based on a predefined temperature threshold.
- [x] **Data Logger:** Implemented Arduino Serial Monitor data logging in CSV format, recording temperature measurements and motor state (ON/OFF).
- [x] **Data Visualizer & Plotter:** Developed a Python application using pandas and mathplotlib to read CSV data and visualize motor behavior against temperature.
