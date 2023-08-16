#include "function_pointers.h"
#include <stdio.h>

/*
   * prints_name - prints a name
   *@name shows the input name
   *
   *@f : function pointer
   * Return : no return
   */

void print_name(char *name, void (*f)(char *))

{
	if (name && f)

	{
		f(name);

	}
}
