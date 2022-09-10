/*Write a function to check whether a given number is even or odd. Return 1 if the
number is even, otherwise return 0. (TSRS)*/
#include<stdio.h>
int check_number(int );
int main()
{
    int number, result;
    printf("Enter a number to check even or odd: ");
    scanf("%d",&number);
    result= check_number(number);
    if(result)
        printf("Entred number is odd");
    else
        printf("Entred number is even");
    return 0;
}
int check_number(int number) {
    if(number%2)
        return 1;
    else
        return 0;
}
