//link do exemplo https://www.tutorialspoint.com/cprogramming/c_pointers.htm
//acesso 21:58 29/08/2019
#include <stdio.h>
/*
int    *ip;     //pointer to an integer
double *dp;     //pointer to a double
float  *fp;     //pointer to a float 
char   *ch      //pointer to a character 
*/
int main () {
   /*
   char  var = 20;   	// declaração de variavel 
   char  *ip;        	//declara um ponteiro para inteiro 

   ip = &var;  	//guardar o endereço de var no role
   printf("valor da variavel: %x  \n",&var);

   // address stored in pointer variable 
   printf("endereço guardado em ip variable:%x\n",ip);

 //  access the value using the pointer 
   printf("valor armazenado em  *ip variable: %d\n", *ip );
 */
 	int i=0;
 	float a=0;
 	float b=0;
 	float c;
 	float d;
 	float e;
 //	char string_c[20];
 //	char string_b[20];
 	while (i< 1000){
 		c= a++/a++;
 		d= ++b/b++;
 		e= d-c;
 		//printf(" valor de a:%f \n", a);
 		//printf(" valor de b:%f \n", b);
 		//printf(" valor de c:%f \n", c);
 		//printf(" valor de d:%f \n", d);
 		printf("valor de c: %f  d: %f  diferença: %f \n", c, d, e);
 //		string_c[i]=c;
 //		string_b[i]=b;
 		i++;
 		
 		
 	}
 	
 		

return 0;
}
