#include<stdio.h>
int n;
int sum;
int main()
{
//	int n;
	scanf("%d",&n);
	sum=0;
	fib(1,1);
	printf("SUM = %d",sum);

	return 0;
}

int fib(int prev,int cur)
{
	if(cur<n)
	{
		printf("%d\n",cur);
		if(cur%2==0)
		sum += cur;
		fib(cur,cur+prev);			
	}
	//return sum;
	return 0;
}

