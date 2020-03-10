/*
A thread can get its own thread id by calling pthread_self(), which returns the thread id:
      pthread_t pthread_self();
Use it as
      pthread_t tid;
      tid = pthread_self();
Modify the code for hello.c to print out the thread id for both threads. Recompile and run the hello executable. The new ouput should be similar to
      I am thread 1. Created new thread (4) ...
      Hello from new thread 4 - got 11
Now modify the code so that the main thread passes its own thread id to the new thread it creates. Recompile and run the hello executable. The ouput should be similar to
      I am thread 1. Created new thread (4) ...
      Hello from new thread 4 - got 1
*/
#include <pthread.h>
#include <stdio.h> // função exit 
#include <stdlib.h>

void * PrintHello(void * data) // definindo como parametro um ponteiro
{
    int my_data = (int)data;  
    pthread_t tid;
    tid = pthread_self();
    printf("\n Hello from new thread %u - got 1 !\n", my_data);/*, tid*/
   // pthread_exit(NULL);
}

int main()
{
    int rc;
 //    int tc;
    pthread_t thread_id;
   
    int t = 1;

    rc = pthread_create(&thread_id, NULL, PrintHello, (void*)thread_id); 
    if(rc)
    {
      printf("\n ERROR: return code from pthread_create is %d \n", rc); // checando para a possibilidade de algum erro
      exit(0);
    }
   sleep(1);
     printf("\n I am thread (%d).Created new thread (%u)... \n",t, thread_id);

    pthread_exit(NULL);
/* input e output no terminal
>>gcc exer2.c -o exer2 -lpthread
 
 I am thread (1).Created new thread (404436736)... 

 Hello from new thread 404436736 - got 1 !

*/

    //exit(1);
}
