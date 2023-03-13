#include <stdio.h>

int main()
{
    char sw = 'a';
    while(1)
    {
        printf("choose");
        scanf("%c", &sw); fflush(stdin);
        switch(sw)
        {
            case 'a':
            printf("a eingeben \n");
            break;
            case 'b':
            printf("b eingeben \n");
            break;
            case 43:
            printf("+ \n");
            break;
            case 'x':
            printf("ciao \n");
            return 0;
            default:
            printf("keine ahnung,%c : %i \n", sw, sw);
        }
    }
}