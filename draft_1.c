#include <stdio.h>

int main()
{
   int i, x;
   char str[26]; 

   printf("\nPlease enter a string:\t");
   gets(str);

   printf("\nPlease choose following options:\n");
   printf("1 = Encrypt the string.\n");
   printf("2 = Decrypt the string.\n");
   printf("Choice:\t");
   scanf("%d", &x);

   //can i remove the switch statement to just encrypt and decrypt in one go?
   switch(x)
   {
   case 1:
      for(i = 0; (i < 26 && str[i] != '\0'); i++)
        str[i] = str[i] + 9; //shifted by 9

      printf("\nEncrypted string: %s\n", str);
      break;

   case 2:
      for(i = 0; (i < 26 && str[i] != '\0'); i++)
        str[i] = str[i] - 9; //shifted back to original by 9

      printf("\nDecrypted string: %s\n", str);
      break;

   default:
      printf("\nError\n");
   }
   return 0;
}
