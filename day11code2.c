//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include<stdio.h>
int main()
{ 
  char ch;
  printf("enter any character");
  scanf("%c",&ch);
  if(ch>='A'&& ch<='Z'){
    printf("it is an uppercse alphabet");

  }
  else if(ch>='a'&&ch<='z'){
    printf("it is an lowercase alphabet");
  }
     
  if(ch!='A'&& ch!='Z'|| ch!='a'&& ch!='z'){
    if(ch>='0'&&ch<='9'){
        printf("it is an digit");

    }
    else{
        printf(" %c it is an special character");
    }
}
  
   
  return 0;
}



