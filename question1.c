#include<stdio.h>
main(){
     char ch,i;
     i='z';
     printf("enter any alphabet:");
     scanf("%c",&ch);
     for(i=1;ch<i;++i);
     printf("%c",i);
}
