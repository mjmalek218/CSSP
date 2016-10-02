#include <pthread.h>
void* thread(void vargp);

int main()
{
  // thread id number is its own type
  pthread_t tid;

  // the tid argument is used for the Pthread_create function to return the id of 
  // the newly created thread

  // takes a pointer to the id, NULL (dunno...), a pointer to the function to called and
  // the argument for the function
  P_thread_create(&tid, NULL, thread, NULL);
  Pthread_join(tid, NULL);
  exit(0); // the exit function, in general, terminates *all threads*
}

/* What's happening above is that the main thread creates a new thread...
   and then waits for it to terminate before terminating itself. */


/* Returns a void pointer */
void* thread(void *vargp) /* Thread routine */
{
  printf("Hello, world!\n");
  return NULL; //why is this necessary? Perhaps to ensure the peer thread terminates...

}
