#include "struct.h"
#include <string.h>
#include <stdio.h>
int main()
{
	Associate Ass;
	Input_Information(&Ass);
	Print_Information(Ass);
}
void Input_Information( Associate *Ass)
{
	printf("Input for associate\n");
	printf("Input name \n");//Handle input string and space issue
	fgets(Ass->name, 100, stdin);
	printf("Input Adress \n");
	fgets(Ass->address, 100, stdin);//Handle input string and space issue
	printf("Input age \n");
	scanf("%d",&Ass->age);
	printf("Input sex \n");
	scanf("%d",&Ass->sex);
}
void Print_Information( Associate Ass)
{
	printf("Name  :%s",Ass.name);
	printf("Adress:%s",Ass.address);
	printf("Age   :%d\n",Ass.age);
	printf("Sex   :%d\n",Ass.sex);
}

