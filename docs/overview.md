## Project Overview

The system is composed of three main elements:

Digital inputs, represented by physical buttons, which simulate the bits of the numbers to be added;
The Arduino UNO microcontroller, responsible for processing the addition logic;
Digital outputs, represented by LEDs, which display the result of the binary operation.

The logic is simple: the user sets two 4-bit numbers by pressing physical buttons that turn the binary bits on or off. The Arduino then reads these inputs, calculates the sum of the two numbers, and lights up the corresponding LEDs to show the result.

Additionally, there is a specific LED to indicate the final carry-out, which shows whether or not there was a “carry over” at the end of the operation. This feature is very important because it helps us understand the concept of overflow in binary addition operations.
