#include "new.h"

int Func(int a, int b)
{
   if (a == 0 || b == 0)
    {
        throw "don't do that";
    }
    int c = a % b;
    if (c == 0)
        return b;
    return Func(b, c);
	//return 0;
}