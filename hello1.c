/*
fonte: http://www.csc.villanova.edu/~mdamian/threads/posixthreadslong.html#exercise_1
Exercise 3. There are several ways for threads to terminate. One way to safely terminate is to call the pthread_exit routine. In this exercise, modify the your hello.c program as follows. In the PrintHello routine, add a line before the printf call which looks like sleep(1);. This should be the first line of the function. In the main function, comment out the last statement line which contains the pthread_exit call. Recompile and run the hello executable.
What happens? Why?

Now, put the pthread_exit call back in the main program, but remove it from the PrintHello routine. Also add the sleep call to the main routine, just before the second printf call, and remove it from the PrintHello routine. Recompile and run the hello executable.

What happens? Why?

It is necessary to use pthread_exit at the end of the main program. Otherwise, when it exits, all running threads will be killed.
*/
#include <pthread.h>
#include <stdio.h> // função exit 
#include <stdlib.h>

void * PrintHello(void * data) // definindo como parametro um ponteiro
{
    int my_data = (int)data;  
    //sleep(1);
    printf("\n Hello from new thread - got %d !\n", my_data);
    //pthread_exit(NULL);
}

int main()
{
    int rc;
    pthread_t thread_id;

    int t = 11;

    rc = pthread_create(&thread_id, NULL, PrintHello, (void*)t); 
    if(rc)
    {
      printf("\n ERROR: return code from pthread_create is %d \n", rc); // checando para a possibilidade de algum erro
      exit(1);
    }
    printf("\n Created new thread (%u)... \n", thread_id);

   pthread_exit(NULL);
}
 /* input terminal
gcc hello.c -o hello -lpthread

 Created new thread (2536552192)... 

 Hello from new thread - got 11 !
*/
