# 4-Bit Binary Adder with Arduino

## What is this project?

This project implements a 4-bit binary adder using the Arduino UNO board.  
It allows the user to input two 4-bit binary numbers via physical buttons and see the sum result displayed on LEDs.  
An extra LED indicates the carry-out, that is, whether there was a “carry” in the operation, visually showing the binary overflow.

---

## How does the project work?

The Arduino reads the states of the buttons, which represent the bits of the two numbers to be added.  
For each bit, the code calculates the sum considering the carry from the previous operation.  
This process is repeated for all 4 bits, producing the final result and the carry-out.  
The LEDs then display the sum value in real time, updating as the user changes the inputs.

---

## How to use?

1. Connect the 8 buttons to Arduino digital pins 0 to 7 (4 buttons for each number).  
2. Connect the 5 LEDs to digital pins 8 to 12 (4 LEDs for the sum result and 1 for the carry).  
3. Power on the Arduino and press the buttons to set the binary numbers.  
4. Observe the LEDs indicating the sum result and the final carry.  
5. Modify the inputs at any time to see the updated sum in real time.

---

This system is ideal for those who want to understand and visualize the basic logic of binary adders in digital systems, using simple hardware and Arduino programming.


![Imagen não encontrada](https://github.com/rodrigo981-ops/trab_2/blob/Rodrigo9/docs/images/contador-binario.png "Arduino - Readme")
