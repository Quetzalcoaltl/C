//link do exemplo https://www.tutorialspoint.com/cprogramming/c_pointers.htm
//acesso 21:58 29/08/2019
//-------
//link ajuda: https://www.includehelp.com/c-programs/printing-an-address-of-a-variable.aspx
#include <stdio.h>
#include<stdlib.h>
/*
int    *ip;     //pointer to an integer
double *dp;     //pointer to a double
float  *fp;     //pointer to a float 
char   *ch      //pointer to a character 
*/
int main () {
   char  var;   	// declaração de variavel 
   char *ip;        	//declara um ponteiro para inteiro 
   var=1;	 
   ip = &var;  	//guardar o endereço de var no role
   printf("valor da variavel: %x  \n",var);

   // address stored in pointer variable 
   printf("endereço guardado em ip variable:%p \n",&ip);

 //  access the value using the pointer 
   printf("valor armazenado em  *ip variable: %x\n", *ip );

return 0;
}
