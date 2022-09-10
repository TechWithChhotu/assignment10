//Write a function to calculate the area of a circle. (TSRS)
#include<stdio.h>
int area(int );
int main()
{
    int radius, result;
    printf("Enter redias of circle: ");
    scanf("%d",&radius);
    result= area(radius);
    printf("area of circle is %d", result);

    return 0;
}
int area(int radius) {
    return ((22/7)*radius*radius);
}
