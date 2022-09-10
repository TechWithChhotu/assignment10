//Write a function to print first N odd natural numbers. (TSRN)
#include<stdio.h>
void print_odd(int );
int main()
{
    int N;
    printf("Enter the value of N: ");
    scanf("%d",&N);
    print_odd(N);
    return 0;
}
void print_odd(int n) {
	int i;
    for(i=1; i<=n; i++)
        if(i%2)
            printf("%d ",i);
}
