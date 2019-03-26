//[Complete]Problem statement - Multiples of 3 and 5.
#include<stdio.h>

/* Method 1 - Mathematical using sum of 1 to n = n*(n+1)/2  */
int main(){
        int a = 1000,sum = 0;
        int b = 999,count3 = b/3,count5 = b/5, count15 = b/15;
        sum = (3*count3*(count3+1)/2) + (5*count5*(count5+1)/2) - (15*count15*(count15+1)/2)
        printf("%d",sum);
        return 0;
}

/* Method 2 - Simple Iterative approach
int main(){
        int a = 1000,sum = 0;
        for (int i = 1; i < 1000; i++)
                if ((i % 3 == 0) || (i % 5 == 0))
                    sum += i;
        printf("%d",sum);
        return 0;
}
*/