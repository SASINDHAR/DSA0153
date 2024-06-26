#include<stdio.h>
int main()
{
	int num,size,i,count=0;
	scanf("%d",&num);
	size=sizeof(num)*8-1;
	for(i=size;i>=0;i--)
	{
		if(num&(1<<size))
		{
		printf("1");
		count++	;
		}
		else
		printf("0");
	}
	printf("%d",count);
}
