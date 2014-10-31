#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>

int main() {
  int id, i, status;
  id = fork();

  switch(id) {
    case 0:
      printf("Child creation\n");
      execlp("./counter", "./counter", NULL);
      printf("Error!\n");
      exit(1);
    case -1:
      exit(1);
    default:
      sleep(1);
      printf("Father execution\n");
      sleep(1);
      for(i = 0; i < 10; i++) {
        sleep(1);
        kill(id, SIGUSR1);
        printf("Signal sent to child\n");
      }
      wait(&status);
      exit(0);
    }
}
