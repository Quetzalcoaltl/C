#include <stdlib.h>
#include <stdio.h>
//#include <util/delay.h>		// bibliotexa de delay, 

int main()
{
	int x[5], i;
	/* operadores logicos
	&& and
	|| or
	^^ xor
	! not*/
	/*operadores booleanos, ou seja bit a bit do paranaue
	& and
	| or 
	^ xor
	~ not*/
	// operador ternario: x<condição >? <valor1; valor 2>
	//int y[5];
	for (i=0; i<5; i++)
	{
		
		//x[i]= i*10;
		*(x+i)= i*10;
		printf(" %i \n", x[i]);
	}
	/*
	for(;;)
	{
		CPL_Bit(PortB,3);
		_delay_ms(500);
		}*/
	return 0;
}
