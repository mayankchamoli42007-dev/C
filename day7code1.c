#include<stdio.h>
int main(){
 int a[10];
 int sum=0;
 for(int i=0;i<=10;i++)
 {
      //printf("enter  the value at pos %d",i);
      scanf("%d ",&a[i]);
      sum+=a[i]; 
    }
      printf("sum of all element of array id;%d \n",sum);

      return 0;
 }
