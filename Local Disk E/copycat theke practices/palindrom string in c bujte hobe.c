#include<stdio.h>
#include<string.h>
int main()
{
	char c[100];
	scanf("%s",c);
	int x=strlen(c);
	int i,j;
	for(i=0,j=x-1;i<x,j>=0;i++,j--)
	{
		if(c[i]==c[j])
		{
			if(i==x-1)
			{
				printf("yes");
				break;
			}
			else
			{
				continue;
			}
		}
		else
		{
			printf("no");
			break;
		}
		}
}
