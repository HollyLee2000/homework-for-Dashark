#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int judgeprime(int m)
{
	int a,b;
	int judge = 1;
	for(a=2; a<=sqrt(m); a++)
	{
		for(b=2; b<m; b++)
		{
			if(a*b==m)
			{
				judge = 0;
				break;
			}
		}
		if(judge==0)
			break;
	}
	return judge;
}

int leacommul(int m,int n)
{
	int i;
	int find = 0;
	for(i=m; find==0; i++)
	{
		if(i%m==0&&i%n==0)
		{
			find = 1;
		}
	}
	return i - 1;
}

int grecomdiv(int m,int n)
{
	int i;
	int find = 0;
	for(i=1; i<((m>n)?m:n); i++)
	{
		if(m%i==0&&n%i==0)
		{
			find = i;
		}
	}
	return find;
}

int main()
{
	int i,j,k;
	printf("Input 2 numbers you want to operate(separated with space) : \n");
	scanf("%d %d",&i,&j);
	if(judgeprime(i))
		printf("%d is a prime number\n",i);
	else
		printf("%d is not a prime number\n",i);
	if(judgeprime(j))
		printf("%d is a prime number\n",j);
	else
		printf("%d is not a prime number\n",j);
	printf("The lease common multiple of %d and %d is %d\n",i,j,leacommul(i,j));
	printf("The greatest common divisor of %d and %d is %d\n",i,j,grecomdiv(i,j));
	system("pause");
	return 0;
}
