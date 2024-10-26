import RPi.GPIO as GPIO

import time

pin = 12

GPIO.setmode(GPIO.BOARD)

GPIO.setwarnings(False)

GPIO.setup(pin, GPIO.OUT)

GPIO.output(pin, GPIO.LOW)

while True:
    
    print ("LED ON")
    
    GPIO.output(pin, True)
    
    time.sleep(2)
    
    print ("LED OFF")
    
    GPIO.output(pin, False)
    
    time.sleep(5)

GPIO.cleanup()    
