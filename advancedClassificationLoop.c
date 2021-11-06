#include <stdio.h>
#include "NumClass.h"

  int power(int x, int y)
	{
	        if (y == 0)
	            return 1;
	        else if (y % 2 == 0)
	            return power(x, y / 2) * power(x, y / 2);
	        else
	            return x * power(x, y / 2) * power(x, y / 2);
	    }


int isArmstrong(int num){
		   int originalNum, remainder, n = 0;
		   float result = 0;
		   originalNum = num;

		   // store the number of digits of num in n
		   for (originalNum = num; originalNum != 0; ++n) {
		       originalNum /= 10;
		   }

		   for (originalNum = num; originalNum != 0; originalNum /= 10) {
		       remainder = originalNum % 10;

		      // store the sum of the power of individual digits in result
		   
		      result +=  power(remainder, n);
		   }

		if((int)result == num){
		    return 1;
		}
		return 0;
		}
int isPalindrome(int x){
    int a,b=0;
    int c= x;
while(x>0)
{
    a=x%10;
    b= (b*10)+a;
    x=x/10;

}
if(c==b){
    return 1;
}
return 0;
}

int main(){
    printf("%d\n",isPalindrome(131));
    return 0;
}