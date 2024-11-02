/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include "Array.h"
int main()
{
    int arr[10],arr1[10],count;
    scanf("%d",&count);
    /**/
    NhapArr(arr,count);
    /**/
    HienThiArr(arr,count);
    /**/
    printf("Sum=%d\n", tongArray(arr,count));
    /**/
    printf("Medium=%f\n",trungBinhArray(arr,count));
    /**/
    copyArray(arr,arr1,count);
    /**/
    maximumArray(arr,count,6);
    HienThiArr(arr,count);
    /**/
    sapXepArray(arr,count);
    HienThiArr(arr,count);
}
void NhapArr(int *arr,int count)
{
	int i=0;
    for(;i<count;i++)
    {
        printf("A[%d]= ",i);
        scanf("%d",arr+i);
    }
}
void HienThiArr(int *arr, int count)
{
	int i=0;
    for(;i<count;i++)
    {
        printf("A[%d]=%d\n",i,*(arr+i));
    }
}
/*Tao mot function tongArray de tinh tong cac gia tri trong array va tra ve ket qua.*/
int tongArray (int *arr, int count)
{
    int dem=0;
    int i=0;
    for(;i<count;i++)
    {
       dem+=*(arr+i);
    }
    return dem;
}
/*Tao mot function trungBinhArray de tinh trung binh cac gia tri chua trong no.*/
float trungBinhArray (int *arr, int count)
{
    int dem=0;
    int i=0;
    for(;i<count;i++)
    {
       dem+=*(arr+i);
    }
    return (float)dem/count;
}
/*Tao mot function copyArray de chep noi dung array nay sang mot array khac*/
void copyArray (int *arr, int *arr1, int count)
{
	int i=0;
    for(;i<count; i++)
    {
        *(arr1+i)=*(arr+i);
        printf("arr1[%d]=%d\n",i,*(arr1+i));
    }
}
/*Viet mot function maximumArray co nhiem vu so sanh tat ca cac gia tri chua ben trong array voi giaTriMax. Neu co gia tri lon hon bien so giaTriMax dua vao, no se chuyen thanh 0*/
void maximumArray (int *arr, int count, int giaTriMax)
{
	int i=0;
    for(;i<count; i++)
    {
		if(*(arr+i)>=giaTriMax)
		{
			*(arr+i)=0;
		}
    }
}
/*Hay viet mot function sapXepArray sap xep lai cac gia tri ben trong theo thu tu tang dan.*/
void sapXepArray (int *arr, int count)
{
	int i=0,j;
    for(;i<count; i++)
    {
    	for(j=i+1;j<count;j++)
    	{
    		if(arr[j]<arr[i])
    		{
    			int temp=0;
    			temp=arr[j];
    			arr[j]=arr[i];
    			arr[i]=temp;
			}
		}
	}
}

