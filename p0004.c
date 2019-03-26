//[Complete]Problem statement - Largest palindrome product.

#include<stdio.h>
#include<math.h>

int palindrome_check (int);

int main(){
        int largest_palindrome = 0;
        
        for(int i=999; i>=100; i--)
                for(int j=990; j>=100; j=j-11){
                        int product = i*j;
                        if ((palindrome_check(product ) == 1) && (product  > largest_palindrome))
                                largest_palindrome = product;
                }


        printf("%d",largest_palindrome);
        
        return 0;
}

int palindrome_check (int p){
        int head, tail,count = 0,i=0,j=0,a[10],temp=p; //can use dynamic memory allocation for variable size array.
        if (temp/10 == 0)
                return 1;
        while(temp != 0){
                a[i]=temp%10;
                temp = temp/10;
                count++;
                i++;
        }
        for(i=0,j=count-1; i <= count/2-1; i++,j--){
                if (a[i] != a[j])
                        return 0;
        }
        return 1;
}

/* Improved the algo after some research - 
so changed the decrement of j by 11 rather than 1 and also initialized is the largest 3 digit multiple of 11.

The palindrome can be written as: 
abccba

Which then simpifies to:
100000a + 10000b + 1000c + 100c + 10b + a

And then:
100001a + 10010b + 1100c

Factoring out 11, you get:
11(9091a + 910b + 100c)

So the palindrome must be divisible by 11.  Seeing as 11 is prime, at least one of the numbers must be divisible by 11.
*/