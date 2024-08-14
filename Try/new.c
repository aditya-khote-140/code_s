//  #include<stdio.h>
//  int main() {
//     int a = 10;
//     printf("%d%d%d",++a,++a,++a);
//     return 0;

//  }

#include <stdio.h>
#include <math.h>

int main()
{
    float side1, side2, side3, s, area;

    // Input the lengths of the three sides
    printf("Enter the length of side 1: ");
    scanf("%f", &side1);

    printf("Enter the length of side 2: ");
    scanf("%f", &side2);

    printf("Enter the length of side 3: ");
    scanf("%f", &side3);

    // Calculate the semi-perimeter (s)
    s = (side1 + side2 + side3) / 2;

    // Calculate the area using Heron's formula
    area = sqrt(s * (s - side1) * (s - side2) * (s - side3));

    // Display the area
    printf("The area of the triangle is: %f\n", area);

    return 0;
}