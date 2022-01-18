#include<stdio.h>
#include<conio.h>

int main()
{
    printf("Enter the height of the pattern : ");
    int height;
    scanf("%d", &height);

    for (int i = 5; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}
