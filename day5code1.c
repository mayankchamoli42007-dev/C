#include<stdio.h>
int main(){
    int cel;
    printf("enter temp in celsius");
    scanf("%d",&cel);
    int fahrenheit = (cel*9/5)+32;
    printf("temperature in fahrenite is:%d \n",fahrenheit);
    return 0;
} 