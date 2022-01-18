
#include<stdio.h>
#include<math.h>

int main()
{
    printf("Select the type of input : \n");
    printf("1. Base and Height\n");
    printf("2. All 3 sides\n");
    printf("Enter your choice : ");

    int choice;
    float base, height, s, s1, s2, s3, area;
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter the base length and height of triangle : ");
        scanf("%f %f", &base, &height);
        area = 0.5 * base * height;
        printf("Area of the triangle : %f sq. units", area);
        break;
    case 2:
        printf("Enter the lengths of sides of the triangle : ");
        scanf("%f %f %f", &s1, &s2, &s3);
        s = (s1+s2+s3)/2;
        area = (s * (s-s1) * (s-s2) * (s-s3));
        printf("Area of the triangle : %f sq. units\n", area);
        break;
    default:
        printf("Invalid choice.");
    }
}
