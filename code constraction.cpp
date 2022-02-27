//implementation of the file
//Rectangle.h


#include "Rectangle.h"//needed for the rectangle class
#include <iostream>//needed for cout
#include <cstdlib>//needed for the exit function

using namespace std;

Rectangle :: Rectangle ()//constraction defination
{
	width = 0.0;//constraction defination
	length = 0.0;//constraction defination
}

void Rectangle :: setWidth(double w)//SETWIDTH SETS THE VALUE OF THE MEMBBER VARIABLE WIDTH
{
	if ( w>=0)
		width = w;
	else
	{
		cout<< "Invalid width";
		exit (EXIT_FAILURE);
			}
			
}
void Rectangle :: setLength(double l)//SETLENGTH SETS THE VALUE OF THE MEMBBER VARIABLE LENGTH
{
	if ( l>=0)
		lengthth = l;
	else
	{
		cout<< "Invalid length";
		exit (EXIT_FAILURE);
			}
		}
