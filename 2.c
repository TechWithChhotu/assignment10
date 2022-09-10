//Write a function to calculate simple interest. (TSRS)
#include<stdio.h>
int SI(int,int,float );
int main()
{
    int P,T,si;
    float R;
    printf("Enter the amount: ");
    scanf("%d",&P);
    printf("Enter time: ");
    scanf("%d",&T);
    printf("Enter intrest rate: ");
    scanf("%f",&R);
    si=SI(P,T,R);
    printf("simple interest: %d",si);
}
int SI(int P, int T,float R) {
    int si=(P*T*R)/100;
    return si;
}
