#include <stdio.h>
#include <ctype.h>
#define SIZE 5

void convert(char *sPtr);
int bubble(int *);

int main(void)
{
	int n[SIZE]={6,52,50,65,24};
	int i;
	char string[]="Bubble Sort : ";
	
	bubble(n);
	
	printf("�r���ഫ�e:\n %s",string);
	for(i=0;i<SIZE;i++)
		printf("%d  ",n[i]);
	convert(string);
	printf("\n�r���ഫ��:\n %s",string);
	for(i=0;i<SIZE;i++)
		printf("%d  ",n[i]);
}

void convert(char *sPtr)
{
	while (*sPtr !='\0')
	{
		*sPtr = toupper( *sPtr);
		++sPtr;
	}
} 
