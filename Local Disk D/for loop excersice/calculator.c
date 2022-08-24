#include <stdio.h>
int main ()
{
    char operator;
    double first, second, result;
    printf("Enter the operator: ");
    scanf("%s", &operator);

    printf("Enter the number: ");
    scanf("%lf %lf", &first, &second);

    switch(operator)
    {
    case '+':
        printf("%.2lf+%.2lf=%.2lf", first, second, (first+second));
        break;
    case '-':
        printf("%0.2lf-%0.2lf=%0.2lf", first, second, (first+second));
        break;
    case '*':
        printf("%0.2lf*%0.2lf=%0.2lf", first, second, (first+second));
        break;
    case '/':
        if(second !=0.0)
            printf("%0.2lf/%0.2lf=%0.2lf", first, second, (first+second));
        else
            printf("Divided by zero situation");
        break;

        default:
        printf("Invalid operator");

    }
        return 0;
    }
