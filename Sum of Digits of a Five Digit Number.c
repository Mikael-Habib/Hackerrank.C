#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,x,c=0;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    do
    {
       x=n%10;
       n=n/10;
      c=c+x;

    }while(n!=0);

      printf("%d",c);
    return 0;
}

