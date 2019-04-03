#include <stdio.h>

int main(void) {
  char name[] = "abcdefghijklmnopqrstuvwxyz";

  printf("%c", *name+1);     // output is a word of some sort
  printf("%c", *(name));   
  printf("%c\n", *(name+12));   

  char *namePtr;

  namePtr = name+6;
  printf("%c", *namePtr+1);     // shifted by 6
  printf("%c", *(namePtr));   
  printf("%c\n", *(namePtr+12));   
}
