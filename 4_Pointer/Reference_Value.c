#include <stdio.h>
void ConvertSecond2Minute(int *minute,int *second);
int main()
{
    int second,minute;
    printf("Input the second: ");
    scanf("%d",&second);
    ConvertSecond2Minute(&minute,&second);
    printf("=>%dMinutes %dSeconds",minute,second);
    return 0;
}
void ConvertSecond2Minute(int *minute,int *second)
{
    *minute = *second/60;//*minute will get value of second variable 
    *second = *second%60;//*second will get value of second variable
}
