#include "new.h"
#include <stdio.h>
#include <tchar.h>
#include <stdlib.h>

int Func(int a, int b)
{
   if (a == 0 || b == 0)
    {
        throw "don't do that";
    }

   new int[100];
	
    int c = a % b;
	int *p= (int *)malloc(100);
    if (c == 0)
        return b;
    return Func(b, c);
	//return 0;
}
void MyClass::add()
{
	int a=0;
	int b=3;
	int c=a+b;

}