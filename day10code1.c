//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include<stdio.h>
int main(){
  int n;
  printf("enter any integer");
  scanf("%d\n",&n);
  if(n>0){
    if(n==0){
        printf("integer is zero");

    }
    else{
        printf("integer is positive");
    }

}
else{
    printf("integer is negative");

}

return 0;
}







