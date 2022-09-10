//Write a function to check whether a given number contains a given digit or not. (TSRS)
#include<stdio.h>
int check_digit(int );
int main()
{
    int number, result;
    printf("Enter a number: ");
    scanf("%d",&number);
    result=check_digit(number);
    if(result)
        printf("Entered number is not a digit");
    else
        printf("Entered number is a digit");
    return 0;
}
int check_digit(int n) {
    return (n%10);
}
