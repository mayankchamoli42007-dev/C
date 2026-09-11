#include <stdio.h>
int main() {
    int sum=0;
    int n;
    printf("enter number till you wanna do sum");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    { sum=sum+i;
    }
    printf("the sum of n natural number is;%d\n",sum);
    return 0;

}   