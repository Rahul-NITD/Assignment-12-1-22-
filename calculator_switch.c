
#include<stdio.h>
#include<conio.h>

int main()
{
    printf("Enter the calculation statement : ");
    float num1;
    scanf("%f", &num1);

    char operation;
    scanf(" %c", &operation);

    float num2;
    scanf("%f", &num2);

    float res = 0;
    switch(operation)
    {
    case '+':
        res = num1+num2;
        break;
    case '-':
        res = num1-num2;
        break;
    case '*':
        res = num1*num2;
        break;
    case '/':
        if (num2 != 0)
        {
            res = num1/num2;
        }
        else
        {
            printf("division by zero not possible!!");
            return 0;
        }
        break;
    case '%':
        if (num2 != 0)
        {
            res = (int)num1%(int)num2;
        }
        else
        {
            printf("Invalid Input! cannot find remainder when divided by 0.\n");
            return 0;
        }
        break;
    default:
        printf("Any calculation cannot be performed with the given operator.\n");
        return 0;
    }

    printf("The result is : %f\n", res);


}
