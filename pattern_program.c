#include<stdio.h>
#include<conio.h>

int main()
{
    printf("Enter the pattern height : ");
    int height;
    scanf("%d", &height);

    for (int i = height; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" *");
        }
        printf("\n");
    }
}
