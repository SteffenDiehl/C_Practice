#include <stdio.h>

int main()
{
    int alter = 67;
    int ok = 0;
    printf("alter \n");
    scanf("%i", &alter); fflush(stdin);
    printf("Ihr alter ist: %i\n", alter);
    printf("hello world");
    printf("enter a char \n");
    scanf("%c", &ok); fflush(stdin);
    printf("ASCII %c is  %i \n", ok, ok);
    printf("speicher %i \n", sizeof(ok));
    //getchar();
    return 0;
}