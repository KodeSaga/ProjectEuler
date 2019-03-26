//[Complete]Problem statement - Even Fibonacci numbers.
#include<stdio.h>
int main(){
        int a = 1, b = 2, c, sum=2;
        while((a+b)<4000000){
                c = a + b;
                a = b;
                b = c;
                if (c % 2 == 0)
                    sum += c;
        }
        printf("%d",sum);
        return 0;
}