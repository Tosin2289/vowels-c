#include <stdio.h>
#include <stdlib.h>

int main()
{

    char charr;

    printf("============Program to check if a character is a vowel or not ==============\n");
    printf("Enter any alphabetic character :\n");

    scanf("%s",&charr);



    if(charr=='a'||charr=='e'||charr=='i'||charr=='0'||charr=='u'||charr=='A'||charr=='E'||charr=='I'||charr=='O'||charr=='U'){
        printf("This is a vowel character\n");

    }
    else{
        printf("This is a consonant character");
    }
    return 0;
}
