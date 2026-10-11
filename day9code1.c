// program to input time in seconds and convert it to hours:minutes:seconds format

#include<stdio.h>
int main()
{ int n,hour,min,sec;
    printf("enter number of seconds");
    scanf("%d",&n);
    hour=n/3600;
    min=(n%3600)/60;
    sec=n%60;
    printf("%d:%d:%d\n",hour,min,sec);


    return 0;
}