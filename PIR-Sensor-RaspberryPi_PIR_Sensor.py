
import webiopi
import datetime
import RPi.GPIO as GPIO
import time
GPIO = webiopi.GPIO
#GPIO.setmode(GPIO.BCM)
PIR = 23
LED = 7
STOP = 21



@webiopi.macro
def sendPiroff(STOP) :
    STOP = True

@webiopi.macro
def sendPir():

    localtime = time.asctime( time.localtime(time.time()) )
    print ("Alarma ! ")

    while True :

        GPIO.setup(PIR, GPIO.IN)
        if GPIO.input(PIR) :

            GPIO.setup(LED, GPIO.OUT)
            GPIO.output(LED, True)
            print ("Wykrylem Ruch  :", localtime )
            time.sleep(2)
            GPIO.setup(LED, GPIO.IN)