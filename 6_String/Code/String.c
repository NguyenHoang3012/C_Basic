/*********** Define a special for string libary*******************/
#include<stdio.h>
#include<string.h>
/*****************************************************************/
/*********** Define a special for string libary*******************/
/* We will have some functions to handle some standard feature of String
/* 1-Input and export of string
/* Find a key work 
/* compare string
/* 
/*****************************************************************/
/*Define pototypes************************************************/
void Input_String(char *str);
void Export_String(char *str);
void Find_KeyWord(char *str,char key);
void Compare_String(char *str1,char *str2);
/*****************************************************************/

int main()
{
	char str[100],str2[100],key;
	do
	{
		printf("Input key:\n");
		scanf("%c",&key);
	}
	while(sizeof(key)!=1);
	Input_String(str);
	Export_String(str);
	Find_KeyWord(str,key);
	Compare_String(str,str2);
}
void Input_String(char *str)
{
	printf("Input string from keyboard\n");
	scanf("%s",str);
}
void Export_String(char*str)
{
	printf("Print string :\n");
	printf("%s",str);
}
void Find_KeyWord(char *str,char key)
{
	int i=0;
	for(i=0;i<strlen(str);i++)
	{
		if(*(str+i)==key)
		{
			printf("\nFinded out the key %c in %d\n",key,i);
		}
	}
}
void Compare_String(char *str,char *str2)
{
	printf("Input string to compare\n");
	scanf("%s",str2);
	if(strcmp(str,str2)==0)
	{
		printf("String leng equal\n");
	}
	else
	{
		printf("String isn't equal'");
	}
}
