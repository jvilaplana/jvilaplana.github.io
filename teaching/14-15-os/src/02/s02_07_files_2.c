#include <string.h> // strlen() function
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[]) {
  // String to be written
  const char* string = "\nWinter is coming\n\n";
  // Create and open the file
  int file = open("my_file", O_CREAT|O_WRONLY, 0644);

  if(file == -1) { // Check errors
    perror("Error when opening file");
    exit(1);
  }

  // Write the string to the file
  write(file, string, strlen(string));
  close(file);

  exit(0);
}
