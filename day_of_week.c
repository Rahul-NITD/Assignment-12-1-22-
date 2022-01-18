#include<stdio.h>
#include<conio.h>

int main()
{
    printf("Enter the day number : ");
    int day_num;
    scanf("%d", &day_num);

    switch(day_num)
    {
    case 1:
        printf("Sunday!! (^-^)");
        break;
    case 2:
        printf("Monday (-_-)");
        break;
    case 3:
        printf("Tuesday :(");
        break;
    case 4:
        printf("Wednesday :o");
        break;
    case 5:
        printf("Thursday :|");
        break;
    case 6:
        printf("Friday :/");
        break;
    case 7:
        printf("Saturday :)");
        break;
    default:
        printf("Invalid Input");
    }
}
