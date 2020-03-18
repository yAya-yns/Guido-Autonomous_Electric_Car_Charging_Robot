# Guido-Autonomous_Electric_Car_Charging_Robot
This project is designing mechatronics system through designing and building an autonomous solution (no human control/interaction) for plugging in an electric car charger.

The goal is to design a solution that could accurately plug in an electric car charger into a charging port.The testing environment is setup to simulate an electric carparked in the garage by a driver, the charging port position could thus be anywhere within a 0.5m x 1m rectangle, facing at any slight angle. Your design is allowed to be set up initially ina 1.5m x 2m rectangle, before the test fixture (the car) arrives in the charge port zone.The design is required to locate the charge port and plug in the charger plug autonomously within a 2 minutes testing time.


4 Main Section:
  1. computer_Vision [Folder]
  2. motor_control_arduino [Folder]
  3. bootingCode [Folder]
  4. Remote Controller [Folder]
  
  For computer_vision folder:
    - OpenCVLearning [Folder] contains practices of detecting perfect circles and locate their centers
    - rough_locating [Folder] contains code of detecting the charging port roughly.
      - there is a file named "Demo of Finding the Circle on the port.mp4" that demonstrate the result
  
  For motor_control_arduino folder:
    - there are codes used for milestone 1 to control the rover manually
    - these code will be transferred to python code that will be run by a Raspberry Pi in the future
    
  For bootingCode folder:
    - this folder contains a bash code to run a python code once a raspberry Pi is powered
    - this is to ease the setup process for the charging robot
  
  For Remote Controller Folder:
    - this folder contains the code for controlling rover via HC12 module (was not used at the end)
    
  
