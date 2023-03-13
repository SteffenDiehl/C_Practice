// Program to create a simple calculator
#include <stdio.h>

int main() {
    char operation;
    int n1, n2, n3;
    char choose;
    char yes = "y";

    printf("Enter a operand: ");
    scanf("%i",&n1);
while(1)
    {
        printf("Enter aother operand: ");
        scanf("%i",&n2); fflush(stdin);
        printf("Enter an operator (+, -, *, /, %%): ");
        scanf("%c", &operation); fflush(stdin);
        switch(operation)
        {
            case '+':
                n3 = n1 + n2;
                printf("%i + %i = %i",n1, n2, n3);
                break;

            case '-':
                n3 = n1 - n2;
                printf("%i - %i = %i",n1, n2, n3);
                break;

            case '*':
                n3 = n1 * n2;
                printf("%i * %i = %i",n1, n2, n3);
                break;

            case '/':
                n3 = n1 / n2;
                printf("%i / %i = %i",n1, n2, n3);
                break;
            case '%':
                n3 = n1 % n2;
                printf("%i %% %i = %i",n1, n2, n3);
                break;
            // operator doesn't match any case constant +, -, *, /, %
            default:            
                printf("Error! operator is not correct");
        }
        printf("Do you want to keep going? (y/n)");
        scanf("%c", &choose); fflush(stdin);
        if (choose == yes)
        {
            n1 = n3;
        }
        else
        {
            break;
        }
    }
    return 0;
}