//Write a function to calculate the factorial of a number. (TSRS)
#include<stdio.h>
int factorial(int );
int main()
{
    int number, result;
    printf("Enter the number: ");
    scanf("%d",&number);
    result= factorial(number);
    printf("Factorial of %d is %d", number, result);
    return 0;
}
int factorial(int n) {
    int result=n;
    while(n--,n)
        result*=n;
    return result;
}
