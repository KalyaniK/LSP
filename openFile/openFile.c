#include "headerFiles.h"

int main(int argc, char const *argv[]) {
  int fd;

  fd = open(argv[1], O_RDONLY);

  if(fd < 0)
  {
      printf("File could not be opened.\n");
      return 1;
  } else {
    printf("File opened successfully.\n");
  }

  close(fd);
  return 0;
}
