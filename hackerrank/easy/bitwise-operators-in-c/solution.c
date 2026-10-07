#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int maxAND =0;
  int maxOr =0;
  int maxXor =0;
  
  for (int a=1; a<=n;a++)
  { 
    for(int b=a+1; b<=n;b++)
    {
    int andresult = a&b;
    int orresult =a|b;
    int xorresult =a^b;
    
    if(andresult < k && andresult > maxAND)
    {
        maxAND= andresult;
    }
    if (orresult < k && orresult > maxOr)
    {
      maxOr = orresult;
    }
    if (xorresult < k && xorresult > maxXor)
    {
      maxXor = xorresult;
    }
    
    }
  }
  printf("%d\n",maxAND);
  printf("%d\n", maxOr);
  printf("%d",maxXor);
  }

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
