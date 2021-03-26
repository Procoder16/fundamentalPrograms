
#include<stdio.h>

int  nextPowerOfTwo ( int  n )
{
	int value = 1;
	while(value<=n)
	{
		value=value << 1;
	}
	return value ;
}

int  previousPowerOfTwo(int  n )
{
	if((n&&!(n&(n-1)))==1)
	{
		return (n>>1);
	}
	while(n&n-1)
	{
		n=n&n-1;
	}
	return  n ;
}

int main()
{
	int n;

	printf("Enter the number:\n");
	scanf("%d",&n);
	int nextPower=nextPowerOfTwo(n);
	printf("Next power of two :%d, nextPower");

	int previousPower=previousPowerOfTwo(n);
	printf("Previous power of two :%d, previousPower");
	return 0;
}
