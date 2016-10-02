/* WARNING: this code is buggy. */
#include "csapp.h" 

void *thread(void *vargp);      /* Thread routine proto-type */

/* Global shared variable */
volatile long cnt = 0; /* Counter */

/* I believe these arguments allow for command-line arguments...look into this */
int main(int argc, char **argv)
{
  long niters;
  pthread_t tid1, tid2; 

  /* Check input argument: usage statements are output on incorrect arguments */
  if (argc != 2){
    printf("usage: %s <niters>\n", argv[0]);
    exit(0);
  }

  /* convert string to integer */
  niters = atoi(argv[1]);

  /* Create threads and wait for them to finish */
  Pthread_create(&tid1, NULL, thread, &niters);
  Pthread_create(&tid2, NULL, thread, &niters);
  Pthread_join(tid1, NULL);
  Pthread_join(tid2, NULL);

  /* Check result. Since niters is constant and two sets of threads increment,
     the answer should be 2 * niters.  */
  if (cnt != (2 * niters))
    printf("BOOM! cnt=%ld\n", cnt);
  else
    printf("OK cnt=%ld\n", cnt);
  exit(0);
}

/* Thread routine */

/* What this function is doing is incrementing 
   every thread based upon the argument to the thread. */
void *thread(void *vargp)
{

  // remember u can initialize multiple variables at once in c 
  // if different types, then the last one is valid 
  long i, niters = *((long *) vargp);

  for (i = 0; i < niters; i++)
    cnt++;

  return NULL;

}
