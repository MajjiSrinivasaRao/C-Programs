#include<stdio.h>
void main()
{
	int n;
	int i=1;
	int sum=0;
	printf("Enter n value ");
	scanf("%d",&n);
	while(i<n)
	{
		if(n%i==0)
			sum=sum+i;
		i++;
	}
	if(sum==n)
	printf(" The given number is perfect ");
	else
	printf("The given number is not perfect ");
}