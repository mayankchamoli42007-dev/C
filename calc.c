#include <stdio.h>
int main()
{ int l,b;
    printf("enter lenght and breadth");
    scanf("%d %d",&l,&b);
    printf("area of rectangle is:%d \n",l*b);
    printf(" perimeter of rectangle is:%d",2*(l+b));
    return 0;
}