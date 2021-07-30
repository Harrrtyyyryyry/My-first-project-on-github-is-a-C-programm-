#include <stdio.h>

int main()
{
    /* 1) Write a C programme to calculate area of rectangle 
    i)Using hard coded inputs
    ii) Asking input from users
    */

    // i)

    int length = 10;
    int breadth = 12;

    printf("The area of rectangle where length is %d meters and breadth is %d meters, then the area is :- %d meters-squared \n", length, breadth, length * breadth);

    // ii)

    int a;
    int b;

    printf("Input your length 'a' in (meters)\n");
    scanf("%d", &a);

    printf("Input your breadth 'b' in (meters)\n");
    scanf("%d", &b);

    printf("The area of the rectangle is %d meter-squared\n", a * b);

    /* 
        Calculate the area of a circle and modify the same programme 
        to calculate the volume of a cylinder given its radius and height
     */

    //i) Circle area (pi * r^2)

    int radius;
    float pi = 22 / 7;

    printf("Input your value of radius(in meters) v \n");
    scanf("%d", &radius);

    printf("The area of your circle is --> %f meter-squared\n", pi * radius * radius);

    // ii) Volume of Cylinder pi =  3.14159265359

    int height;

    printf("Input your height (in meters) \n");
    scanf("%d", &height);

    printf("Input your radius to get volume of cylinder(in meters) \n");
    scanf("%d", &radius);

    printf("The volume of a cylinder is --> %f meter-cube \n", pi * radius * radius * height);

    /* Write a programme to convert Celcius(Centigrade to farenhiet) */

    int Celcius;
    printf("Input your celcius here --> \n");
    scanf("%d", &Celcius);

    float Farenheit = (Celcius * 1.8) + 32;
    printf("Your degree farenheit is --> %f\n", Farenheit);

    // Calculate simple intrest where it is (prt)/100

    long principle;
    int rate_percent;
    int time;

    printf("Input your principle --> \n");
    scanf("%d", &principle);

    printf("Input your rate --> \n");
    scanf("%d", &rate_percent);

    printf("Time --> \n");
    scanf("%d", &time);

    printf("Your simple intrest is --> %d \n", (principle * time * rate_percent) / 100);
    return 0;
}
