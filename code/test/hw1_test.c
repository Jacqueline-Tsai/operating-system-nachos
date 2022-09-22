#include "syscall.h"
main()
	{
		Log('I');
		PrintInt(88);
		ThreadYield();
		PrintInt(99);
		Log('a');
	}
