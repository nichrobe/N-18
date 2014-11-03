#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void) {
  pid_t parent_pid = getpid();
  pid_t child_pid;

  child_pid = fork();

  if (child_pid == 0) {
    child_pid = getpid();

    pid_t gChild_pid;
    gChild_pid = fork();

    if (gChild_pid == 0) {
      printf("\nMy id is %d\nMy parents id is %d\nMy Grandparents id is %d\n", gChild_pid, child_pid, parent_pid);
      exit(0);
    }
  }
}
