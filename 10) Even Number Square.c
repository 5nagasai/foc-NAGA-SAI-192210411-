#include <stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter a no. = ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			sum+=i*i;
		}
	}
	printf("sum of even no.= %d",sum);
	return 0;
}
