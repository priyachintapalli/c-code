#include<stdio.h>
int main(){
   int n,rev=0,rem,temp;
   printf("enter the no:");
   scanf("%d",&n);
   temp=n;
   while(n>0){
       rem=n%10;
       rev=rev*10+rem;
       n=n/10;
   }
   if(temp==rev){
       printf("palindrome");
   }else{
       printf("not palindrome");
   }
   }
