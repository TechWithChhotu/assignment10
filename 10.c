/*Write a function to print all prime factors of a given number. For example, if the 
number is 36 then your result should be 2, 2, 3, 3. (TSRN)*/
#include<stdio.h>
void primefactor(int );
int main()
{
	int N;
	printf("Enter a number: ");
	scanf("%d",&N);	
	primefactor(N);
	
return 0;
}
void primefactor(int N){
	int i;
	printf("all factor of %d: ",N);
	for(i=1;i<=N;i++){
		if(N%i==0){
			int j,count=0;
			for(j=1;j<=i;j++){
				if(i%j==0)
				count++;
			}
			if(count==2)
			printf("%d ",i);
		}
		//printf("%d ",i);
	}
}

