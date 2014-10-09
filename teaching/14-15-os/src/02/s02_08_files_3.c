#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

char buf1[] = "abcdefghij";
char buf2[] = "ABCDEFGHIJ";

int main() {
  int fd;

  if((fd = creat("my_file", 0644)) < 0) {
		perror("my_file"); exit(-1);
	}

  if(write(fd, buf1, 10) != 10)       perror("buf1");  // offset == 10
  if(lseek(fd, 40, SEEK_SET) == -1)   perror("lseek"); // offset == 20
  if(write(fd, buf2, 10) != 10)       perror("buf2");  // offset == 30

  return 0;
}
