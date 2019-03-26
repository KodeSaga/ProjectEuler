//[Complete]Problem statement - Multiples of 3 and 5.
#include<stdio.h>

int main(){
        int a = 1000,sum = 0;
        for (int i = 1; i < 1000; i++)
                if ((i % 3 == 0) || (i % 5 == 0))
                    sum += i;
        printf("%d",sum);
        return 0;
}
