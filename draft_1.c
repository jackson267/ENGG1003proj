#include <stdio.h>

int main(void) {
  char n[] = "abcdefghijklmnopqrstuvwxyz";

  printf("%c", *n+1);     // output is a word of some sort
  printf("%c", *(n));   
  printf("%c\n", *(n+12));   

  char *nP;

  nP = n+6;
  printf("%c", *nP+1);     // shifted by 6
  printf("%c", *(nP));   
  printf("%c\n", *(nP+12));   
}
