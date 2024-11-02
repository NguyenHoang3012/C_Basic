#include<stdio.h>
int main()
{
	int *pointer1=NULL;
	int tuoi=10;
	pointer1=&tuoi;
	printf("Pointer adress:%d\n",pointer1);
	printf("Value pointer:%d\n",*pointer1);
	printf("Value pointer:%d",*&tuoi);
}
