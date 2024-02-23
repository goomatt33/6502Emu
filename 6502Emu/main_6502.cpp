#include <stdio.h>
#include <stdlib.h>

#include "DataDefines.h"



struct Memory
{
	static constexpr u32 MAX_MEM = 1024 * 64;
	Byte Data[MAX_MEM];

	void Initilize()
	{
		for (u32 i = 0; i < MAX_MEM; i++)
		{
			Data[i] = 0;
		}
	}
};

struct CPU
{

	Word PC;		// The program counter
	Word SP;		// The stack pointer, a 16 bit register

	Byte A, X, Y;		// Accumulator and general purpose registers X and Y

	// Byte fields for the processor status register
	Byte C : 1;		// Carry
	Byte Z : 1;		// Zero
	Byte I : 1;		// Interrupt Disable
	Byte D : 1;		// Decimal mode (BCD)
	Byte V : 1;		// Overflow
	Byte N : 1;		// Negative

	void Reset( Memory& mem )
	{
		PC = 0xFFFC;		// Set the program counter to the initilization vector
		SP = 0x0100;		// Set the stack pointer to the first stack location
		C = Z = I = D = V = N = 0;				// Clear flags
		A = X = Y = 0;		// Initialize the registers;
		mem.Initilize();
	}

	void Execute
};

int main()
{
	Memory mem;
	CPU cpu;
	cpu.Reset(mem);
	return 0;
}