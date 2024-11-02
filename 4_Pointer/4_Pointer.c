#include<stdio.h>
/*************//*************/
/*Address			Value
/*************//*************/
/*&pointerTuoi	pointerTuoi
/*************//*************/
/*pointerTuoi=		&tuoi=> 		*pointerTuoi=tuoi=10
/*************//*************/
/*&tuoi				tuoi=10
/*************//*************/
int Sub(int *pointerTuoi);
int Sub_Value(int tuoi);
int main()
{
	int tuoi=10;// Khai bao gia tri cua tuoi
	Sub_Value(tuoi);
	printf("Tuoi la:%d\n",tuoi);
	Sub_Pointer(&tuoi);// Function call voi tham so truyen vao la dia chi cua bien tuoi
	printf("Tuoi la:%d\n",tuoi);
}
int Sub_Pointer(int *pointerTuoi)// Ham thuc thi function voi tham so truyen vao la mot con tro
{
	*pointerTuoi*=3;// *pointerTuoi la trich xuat truc tiep gia tri cua cua con tro pointerTuoi va thu hien phep gan
}
int Sub_Value(int tuoi)
{
	tuoi*=3;
}

