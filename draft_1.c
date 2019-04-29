#include <stdio.h>
int main()
{
   int i, x;
   unsigned char str[260]; 

   printf("\nEnter a word:\t");
   gets(str); // copying the word to store it then to use it for encryption or decryption 

   printf("Please choose following options:\n");
   printf("1 = Encrypt the word.\n");
   printf("2 = Decrypt the word.\n");
   printf("Choice:\t");
   scanf("%d", &x);

   
   switch(x)
   {
   case 1:
      if(i<90 || i>65) {
      for(i = 0; (i < 26 && str[i] != '\0'); i++)// to keep it in the range for capitals
        str[i] = (str[i] + 1 -65) %26 + 65 ; //shifted by 1

      printf("\nEncrypted word: %s\n", str);
      break;
      }

   case 2:
      if(i<90 || i>65) {
      for(i = 0; (i < 26 && str[i] != '\0'); i++)// to keep it in the range for capitals
        str[i] = (str[i] - 1 + 65) %26 + 65; //shifted back to original by 1

      printf("\nDecrypted word: %s\n", str);
      break;
      }

   default:
      printf("\tError, Try Again");
   }
   return 0;
}