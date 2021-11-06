
#include <stdio.h>
#include "NumClass.h"

int numofdigits(int x){
    if(x==0){
        return 0;
    }
    return 1 + numofdigits(x/10);
}

int reverse(int num)
{
    int rem;
    static int sum=0;
    if(num!=0){
            rem=num%10;
            sum=sum*10+rem;
            reverse(num/10);
    }
        else
            return sum;
    return sum;
} 

int isPalindrome(int x){
    if(reverse(x)==x){
        return 1;
    }
    return 0;

}

int  power(int x, int y)
    {
        if (y == 0)
            return 1;
        else if (y % 2 == 0)
            return power(x, y / 2) * power(x, y / 2);
        else
            return x * power(x, y / 2) * power(x, y / 2);
    }

  

int check (int a , int b)
{
  static int Reminder, Sum = 0;
  
  if (a > 0)
   {
     Reminder = a %10;
     Sum = Sum + power(Reminder, b);
     check(a /10,b);
     return 1;
   }
   else
     return 0;

  

}

  int isArmstrong(int a){
    int b = 0;
    int num = numofdigits(a);
    b = check(a,num);
    return b;
}

 
