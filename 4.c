//Write a function to print first N natural numbers (TSRN)
#include<stdio.h>
void PrintNatural(int n);
int main()
{
    int N;
    printf("Enter value of N: ");
    scanf("%d",&N);
    PrintNatural(N);

    return 0;
}
void PrintNatural(int n) {
	int i;
    for( i=1; i<=n; i++)
        printf("%d ",i);
}
