#include<stdio.h>
findGCD(int a,int b);
int main()
{
    int number1,number2;
    printf("Enter the first number ");
    scanf("%d",&number1);
    printf("Enter the second number ");
    scanf("%d",&number2);
    printf("The gcd is %d",findGCD(number1,number2));
    return 0;
}
int findGCD(int a,int b){
   int GCD = 0,small=0;
   if(a>b){
       small = b;
   }
   else{
       small = a;
   }
   for(int i =1;i<=small;i++){
        if((a % i == 0)&& (b % i)==0){
            GCD = i;
        }
   }
   return GCD;
}
