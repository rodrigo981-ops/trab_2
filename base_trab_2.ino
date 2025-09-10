//TÉCNICO EM DESENVOLVIMENTO DE SISTEMAS - SENAC NH
//Programa base para TRABALHO 2
//PROF.: Glauber Kiss de Souza
//DISC.: Analizar Orient. Técnicas

// O código tem como objetivo simular um somador binário de 4 bits usando Arduino.
// Ele lê dois números de 4 bits (nibbles) de entradas digitais e gera a soma.

// 'sumFlag' is a flag to enable the summation logic. Its value is always 1.
int sumFlag = 1;
// 'carryBit' stores the carry-over from one bit addition to the next.
int carryBit = 0;
// 'nibble1a' to 'nibble1d' will store the bits of the first 4-bit number.
int nibble1a, nibble1b, nibble1c, nibble1d = 0;
// 'nibble2a' to 'nibble2d' will store the bits of the second 4-bit number.
int nibble2a, nibble2b, nibble2c, nibble2d = 0;
// 'resulta' to 'resultd' will store the bits of the resulting sum.
int resulta, resultb, resultc, resultd = 0;

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
int sumBit(int b1, int b2, int cIn)
{
	int bitResult = 0;
	// The variables 'aux1' and 'aux2' are declared but never used.
	int aux1, aux2 = 0;
	// The condition 'if (1)' is always true. This is a logical error.
	// The function should calculate 'bitResult' based on 'b1', 'b2', and 'cIn' (using XOR for example).
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
int sumCarryBit(int b1, int b2, int cIn)
{
	// 'aux1' and 'aux2' are declared but never used.
	int aux1, aux2 = 0;
	// Similar to 'sumBit', the condition 'if (1)' is always true.
	// The carry-out should be calculated based on the bits using a logical AND/OR combination.
	if (1)
	{
		// This line will always execute, making the carry-out always 1.
		cIn = 1;
	}
	else
	{
		cIn = 0;
	}
	// The function returns a value that is always 1, not the calculated carry.
	return cIn;
}

void loop()
{
	// 'sumFlag' is redundantly set to 1 in every loop iteration.
	sumFlag = 1;
	// Read the first 4-bit number from pins 0-3.
	nibble1a = digitalRead(0);
	nibble1b = digitalRead(1);
	nibble1c = digitalRead(2);
	nibble1d = digitalRead(3);
	// Read the second 4-bit number from pins 4-7.
	nibble2a = digitalRead(4);
	nibble2b = digitalRead(5);
	nibble2c = digitalRead(6);
	nibble2d = digitalRead(7);
	// The 'if (sumFlag == 1)' condition is always true.
	if (sumFlag == 1)
	{
		// Initialize the carry-in to 0 for the least significant bit (LSB).
		carryBit = 0;
		// Calculate the LSB of the sum.
		resulta = sumBit(nibble1a, nibble2a, carryBit);
		// Calculate the carry-out from the LSB addition.
		carryBit = sumCarryBit(nibble1a, nibble2a, carryBit);
		// The carry from the previous bit is used for the next one. This is correct.
		resultb = sumBit(nibble1b, nibble2b, carryBit);
		carryBit = sumCarryBit(nibble1b, nibble2b, carryBit);
		resultc = sumBit(nibble1c, nibble2c, carryBit);
		carryBit = sumCarryBit(nibble1c, nibble2c, carryBit);
		resultd = sumBit(nibble1d, nibble2d, carryBit);
		// The final carry is calculated but not stored in a separate variable.
		carryBit = sumCarryBit(nibble1d, nibble2d, carryBit);
	}
	// Write the result bits to pins 8-11.
	digitalWrite(8, resulta);
	digitalWrite(9, resultb);
	digitalWrite(10, resultc);
	digitalWrite(11, resultd);
	// Write the final carry bit to pin 12.
	digitalWrite(12, carryBit);
}
