#include <stdio.h>
#include "NumClass.h"

int isPrime(int x)
{
    int i;
    for (i = 2; i < x; i++)
    {
        if(x%i==0){
            return 1;
        }
    }
    return 0;
     

}
int a(int x) {
if(x==1 || x==0){
    return 1;
}

  return  x*a(x-1);
}



int isStrong(int x) 
{
    int temp = x;
    int count = 0;
    while(x>0){
        int i= x%10;
        x= x/10;
        count = count + a(i);
    }

if(count==temp){
    return 1;
}
return 0;

}

