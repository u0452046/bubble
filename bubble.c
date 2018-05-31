#include <stdio.h>
#define SIZE 5

int bubble(int n[])
{
	int j,i,t;
	
	for(j=1;j<SIZE;j++)
	{
		for(i=0;i<SIZE-1;i++)
		{
			if(n[i]>n[i+1])
			{
				t=n[i];
				n[i]=n[i+1];
				n[i+1]=t;
			}
		}
	}
	return n[i];
}
