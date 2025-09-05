# Guide on how to use

The system is very simple and intuitive to use.
With the Arduino powered on and the buttons connected, the user can press any combination of bits in two groups of four buttons. Each group represents a 4-bit number.

When the buttons are pressed, the Arduino automatically reads the logical states (0 or 1) of each button, performs the sum by considering bits of the same weight, and also takes into account the carry values propagated from one position to the next.

The LEDs light up to represent the value of the sum. For example:

If we input 0001 (1) and 0011 (3), the LEDs will light up to show 0100 (4).
If we add 1111 (15) and 0001 (1), the result will be 0000, and the carry LED will light up, because 15 + 1 = 16 — which exceeds the 4-bit limit.

This allows us to visually understand what happens when binary overflow occurs, something very common in real-world digital systems.

Additionally, the system operates in real-time — meaning that any changes to the buttons are immediately reflected in the LEDs, without the need to reset or restart the code.
