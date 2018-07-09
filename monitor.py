import serial
from time import sleep
import sys


COM = 'COM3'# /dev/ttyACM0 (Linux)
BAUD = 9600

ser = serial.Serial(COM, BAUD, timeout = .1)

print('Waiting for device')
sleep(3)
print(ser.name)
while True:
	data = ser.readline()
	try:
		data = data.decode("UTF-8")
		print(data)
	except:
		print("oops")
