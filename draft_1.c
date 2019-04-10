#include <stdio.h>
void encryptSentence();

int main()
{
    printf("Enter a sentence: ");
    encryptSentence();

    return 0;
}

void encryptSentence()
{
    char c;
    scanf("%c", &c);

    if( c != '\n')
    {
        encryptSentence();
        printf("%c",c);
    }
}  // function to reverse a sentence