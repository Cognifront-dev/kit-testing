import gpiod

import time

buzzer_pin = 17  # GPIO pin number where the buzzer is connected

# Open GPIO chip

chip = gpiod.Chip('gpiochip4')

# Get the GPIO line for the buzzer

buzzer_line = chip.get_line(buzzer_pin)

# Request exclusive access to the line and configure it as an output

buzzer_line.request(consumer="buzzer", type=gpiod.LINE_REQ_DIR_OUT)

try:

   while True:

       buzzer_line.set_value(1)  # Turn on the buzzer

       time.sleep(1)  # Wait for 1 second

       buzzer_line.set_value(0)  # Turn off the buzzer

       time.sleep(1)  # Wait for 1 second

finally:

   # Release the GPIO line and clean up resources on program exit

   buzzer_line.release()

   chip.close()