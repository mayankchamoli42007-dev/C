//program to print sum uptp n natural number


#include<stdio.h>
int main()
{
    int n;
    printf("enter number upto you want do sum");
    scanf("%d",&n);
    int sum=0;
    

    for(int i=1; i<=n;i++)
     {  sum+=i;

     }
     printf("the sum of %d numbers is:%d\n",n,sum);
     return 0;
}