# Hardware

This is code for the physical sliders. It uses 8 linear sliders and reports the values.

The board inside is an off brand version of the [sparkfun pro micro](https://www.sparkfun.com/products/12640).

The allen wrenches are 3/32 inches.

# Write Software

To write software to the board, you need to install the arduino IDE and download some boards:

 - Install the IDE: https://www.arduino.cc/en/software
 - Make sure you set up the right board: https://github.com/sparkfun/Arduino_Boards
 - Install this board set too: https://github.com/dmadison/ArduinoXInput_SparkFun
 - Select the sparkfun pro micro board
 - Select Tools > Processor > (5V, 16 MHz)
 - Reset the board and upload code: https://learn.sparkfun.com/tutorials/pro-micro--fio-v3-hookup-guide/troubleshooting-and-faq

**Note: a message that starts with "Connecting to programmer: ." is probably a success message, even though it is in red like the failure messages**
