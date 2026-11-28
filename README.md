# Fan-Project

Final project for CS 193 class. A temperature controlled fan system using Arduino and C++.

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
6. CSV (For data logging)

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


