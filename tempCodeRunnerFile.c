#include<stdio.h>
#include<math.h>
int main()
{
    int P,R,T;
    printf(" enter principle\n,enter rate\n,enter time");
    scanf("%d%d%d",&P,&R,&T);
    int SI=(P*R*T)/100;    // SIMPLE INTEREST FORMULA
     
    int CI=pow((1+R/100),T);  //Compound interest formula
    
    printf("simple interest=%d",SI);
    printf("compound interest=%d",CI);

    return 0;
}
