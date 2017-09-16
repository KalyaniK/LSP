#include "headerFiles.h"

int main(int argc, char const *argv[]) {
  int fd;

  if (strcmp(argv[2], "read") == 0) {
    fd = open(argv[1], O_RDONLY);

    if(fd < 0)
    {
        printf("File could not be opened.\n");
        return 1;
    } else {
      printf("File opened successfully in O_RDONLY mode.\n");
    }
  } else if (strcmp(argv[2], "write") == 0) {
    fd = open(argv[1], O_WRONLY);

    if(fd < 0)
    {
        printf("File could not be opened.\n");
        return 1;
    } else {
      printf("File opened successfully in O_WRONLY mode.\n");
    }
  } else if (strcmp(argv[2], "append") == 0) {
    fd = open(argv[1], O_APPEND);

    if(fd < 0)
    {
        printf("File could not be opened.\n");
        return 1;
    } else {
      printf("File opened successfully in O_APPEND mode.\n");
    }
  } else if (strcmp(argv[2], "create") == 0) {
    fd = open(argv[1], O_CREAT);

    if(fd < 0)
    {
        printf("File could not be opened.\n");
        return 1;
    } else {
      printf("File opened successfully in O_CREAT mode.\n");
    }
  } else {
    printf("No such mode exists.\nPlease specify a value from following list: {read, write, append, create}\n");
  }

  close(fd);
  return 0;
}
