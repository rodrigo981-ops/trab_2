//TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS - SENAC NH
//Programa base para TRABALHO 2
//PROF.: Glauber Kiss de Souza
//DISC.: Analizar Orient. Técnicas

// The code aims to simulate a 4-bit binary adder using Arduino.
// It reads two 4-bit numbers (nibbles) from digital inputs and outputs their sum.

// 'soma' seems to be a flag to enable the summation logic. Its value is always 1.
int soma = 1;
// 'carryBit' stores the carry-over from one bit addition to the next.
int carryBit = 0;
// 'nib1a' to 'nib1d' will store the bits of the first 4-bit number (nibble).
int nib1a,nib1b,nib1c,nib1d = 0;
// 'nib2a' to 'nib2d' will store the bits of the second 4-bit number (nibble).
int nib2a,nib2b,nib2c,nib2d = 0;
// 'res1a' to 'res1d' will store the bits of the resulting sum.
int res1a,res1b,res1c,res1d = 0;

void setup()
{
	// Configure pins 0-7 as inputs to read the two 4-bit numbers.
	pinMode(0, INPUT);
	pinMode(1, INPUT);
	pinMode(2, INPUT);
	pinMode(3, INPUT);
	pinMode(4, INPUT);
	pinMode(5, INPUT);
	pinMode(6, INPUT);
	pinMode(7, INPUT);
	// Configure pins 8-11 as outputs to display the 4-bit sum.
	pinMode(8, OUTPUT);
	pinMode(9, OUTPUT);
	pinMode(10, OUTPUT);
	pinMode(11, OUTPUT);
	// Pin 12 is an output for the final carry bit.
	pinMode(12, OUTPUT);
	// Pin 13 is configured as input but isn't used in the loop.
	pinMode(13, INPUT);
}

// Function to calculate the sum bit for a single pair of bits and a carry-in.
int somaBit(int b1a, int b2a, int cBit)
{
	int bitResult = 0;
	// The variables 'aux1' and 'aux2' are declared but never used.
	int aux1, aux2 = 0;
	// The condition 'if (1)' is always true. This is a logical error.
	// The function should calculate 'bitResult' based on 'b1a', 'b2a', and 'cBit' (using XOR for example).
	if (1)
	{
		// This line will always execute, making the result always 1.
		bitResult = 1;
	}
	else
	{
		bitResult = 0;
	}
	return bitResult;
}

// Function to calculate the carry-out bit for a single pair of bits and a carry-in.
int somaCarryBit(int b1a, int b2a, int cBit)
{
	// 'aux1' and 'aux2' are declared but never used.
	int aux1, aux2 = 0;
	// Similar to 'somaBit', the condition 'if (1)' is always true.
	// The carry-out should be calculated based on the bits using a logical AND/OR combination.
	if (1)
	{
		// This line will always execute, making the carry-out always 1.
		cBit = 1;
	}
	else
	{
		cBit = 0;
	}
	// The function returns a value that is always 1, not the calculated carry.
	return cBit;
}

void loop()
{
	// 'soma' is redundantly set to 1 in every loop iteration.
	soma = 1;
	// Read the first 4-bit number from pins 0-3.
	nib1a = digitalRead(0);
	nib1b = digitalRead(1);
	nib1c = digitalRead(2);
	nib1d = digitalRead(3);
	// Read the second 4-bit number from pins 4-7.
	nib2a = digitalRead(4);
	nib2b = digitalRead(5);
	nib2c = digitalRead(6);
	nib2d = digitalRead(7);
	// The 'if (soma == 1)' condition is always true.
	if (soma == 1)
	{
		// Initialize the carry-in to 0 for the least significant bit (LSB).
		carryBit = 0;
		// Calculate the LSB of the sum.
		res1a = somaBit(nib1a,nib2a,carryBit);
		// Calculate the carry-out from the LSB addition.
		carryBit = somaCarryBit(nib1a,nib2a,carryBit);
		// The carry from the previous bit is used for the next one. This is correct.
		res1b = somaBit(nib1b,nib2b,carryBit);
		carryBit = somaCarryBit(nib1b,nib2b,carryBit);
		res1c = somaBit(nib1c,nib2c,carryBit);
		carryBit = somaCarryBit(nib1c,nib2c,carryBit);
		res1d = somaBit(nib1d,nib2d,carryBit);
		// The final carry is calculated but not stored in a separate variable.
		carryBit = somaCarryBit(nib1d,nib2d,carryBit);
	}
	// Write the result bits to pins 8-11.
	digitalWrite(8,res1a);
	digitalWrite(9,res1b);
	digitalWrite(10,res1c);
	digitalWrite(11,res1d);
	// Write the final carry bit to pin 12.
	digitalWrite(12,carryBit);
}
