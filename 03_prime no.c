#include<stdio.h>
int main(){
   int n,i,isprime=1;
   printf("enter the no");
   scanf("%d",&n);
   if(n<=1){
       isprime=0;
   }else{
       for(i=2;i<=n/2;i++){
           if(n%i==0){
               isprime=0;
               break;
           }
       }
   }
   if (isprime==1){
       printf("prime number");
   }else{
       printf("not prime number");
   }
}
