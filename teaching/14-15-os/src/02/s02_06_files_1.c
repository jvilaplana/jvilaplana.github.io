#include <fcntl.h>  // Open modes
#include <unistd.h> // Many POSIX functions
#include <stdlib.h> // File functions
#include <stdio.h>  // Standard I/O

int main(int argc, char* argv[]) {
  char string[11];
  int b_read;

  /*
    To generate a file with random data you can use:
    $ head -c 1024 </dev/urandom > my_file
  */

  int file = open ("my_file", O_RDONLY); // Open the file

  if(file == -1) { // Check for errors
    perror("Error while opening file");
    exit(1);
  }

  lseek(file, 400, SEEK_SET); // Moves pointer to position 400
  b_read = read(file, string, 10); // Read 10 bytes
  close(file);

  string[10] = 0;
  printf("%d B have been read. The obtained string is: %s\n", b_read, string);

  return 0;
}
