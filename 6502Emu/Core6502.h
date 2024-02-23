#pragma once

#include <stdio.h>
#include <stdlib.h>

#include "DataDefines.h"

struct ExternalState
{
public:
	Word AddressBus;
	Byte DataBus;

	Byte BusEnable : 1;
	Byte InterruptReq : 1;
	Byte MemLock : 1;
	Byte NonMaskInt : 1;
	Byte Phase1OutClock : 1;
	Byte Phase2InClock : 1;
	Byte Phase2OutClock : 1;
	Byte Ready : 1;
	Byte Reset : 1;
	Byte ReadWrite : 1;
	Byte SetOverflow : 1;
	Byte Synchronize : 1;
	Byte VectorPull : 1;


};

class Core6502
{
private:
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

};

