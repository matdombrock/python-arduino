# what's this??
A simple set of scripts for getting output from an Arduino to act is input for Python.

# how to use?
- Install ```python3```
- Install ```pyserial``` (Use PIP)
- Upload ```mionitor.ino``` to the Arduino.
- Adjust ```monitor.py``` to include your COM location as the COM variable (ie ```COM3``` or ```/dev/ttyACM0```)
- Run with ```python monitor.py --monitor``` (You may have to run as root on linux)

# what are these numbers?
```1/0/1/1/0/0/277/0/0/0/0/0/```

D7  /  D6 /  D5  /  D4 /  D3 / D2 / A5 / A4  / A3 / A2 / A1 / A0  /
 
valA[0] / valA[1] / valA[2] / valA[3] / valA[4] / valA[5] / valA[6] / valA[7] / valA[8] / valA[9] / valA[10]  / valA[11] /
- The First 6 numbers in this sequence represent the digital input pins 7-2 (in reverse numerical order). So the first number is port 7, the second number is port 6 and so on. These are always 1 or 0; on or off.
- The final six parts of the sequence represent the values of analog pins 5-0 (in reverse numerical order). These will be a number between 0 and 1023.
- Values are converted to a string so they can be easily parsed. By refernceing ```valS[0]``` you would get the value of  digital input pin 7. By referencing ```valS[7]``` you will get the value of analog input pin 4

Monitor.ino could be a lot better by using a for loop inside of loop()
