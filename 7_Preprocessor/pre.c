/**************************************************************************************
	#ifndef Defined to prevent the infinity loop when define A.h include B.h and vice
	In this program will describe a description of preprocessor
	+ Derective # will handle by prepocessor 
	+It's will assign value to marco which is defined and 
	 the data for marco will asssign in the program
**************************************************************************************/
#ifndef DEF_FILENAME // Neu constant chua duoc xac dinh file nay chua duoc dua vao
#define DEF_FILENAME // Ta xac dinh constant de lan sau file nay se khong dua vao lai nua
#include "P.h"
#endif
#include <stdio.h>
int main()
{
	printf("%d",Calulate(3,2));
}
int Calulate(int a,int b)
{
	return a+b;
}
