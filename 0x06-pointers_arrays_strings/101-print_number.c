#include "main.h"

/**
 * print_number - print numbers chars
 * @n: integer params
 * Return: 0
 */

void print_number(int n)
{
<<<<<<< HEAD
	  unsigned int n1;

	    n1 = n;
	
      	    if (n < 0)
	        {
		    _putchar('-');
		        n1 = -n;
		  }

	        if (n1 / 10 != 0)
		  {
		      print_number(n1 / 10);
		 	}
		  _putchar((n1 % 10) + '0');
=======
  unsigned int n1;

  n1 = n;

  if (n < 0)
  {
    _putchar('-');
    n1 = -n;
  }

  if (n1 / 10 != 0)
  {
    print_number(n1 / 10);
  }
  _putchar((n1 % 10) + '0');
>>>>>>> 24ebb27a4b2097c2e9d603eace766d1dc30574f1
}
