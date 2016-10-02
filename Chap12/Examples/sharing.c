#include <csapp.h>
#define N 2
#include <stdio.h>

void* thread(void* vargp);

char** ptr; /* Global variable */

int main()
{
  int i;

  /* Need to always declare this so we can track the thread id */
  pthread_t tid;
  char* msgs[N] = {"Hello from foo", "Hello from bar"};

  ptr = msgs; //remember this variable is global

  // this loop will create two threads (given the macro)
  for (i = 0; i < N; i++)
    /* we can pass i this way because sizeof(void *) > i...
       and even if it wasn't i is so small in this case truncation
       wouldn't do any harm no matter how small sizeof(void *) is */
    pthread_create(&tid, NULL, thread, (void *)i);

  pthread_exit(NULL);
}

void* thread(void* vargp)
{
  int myid = (int) vargp;
  static int cnt = 0;
  printf("[%d]: %s (cnt=%d)\n", myid, ptr[myid], ++cnt);
  return NULL;
}
