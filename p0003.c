//[Complete]Problem statement - Largest prime factor.
#include<stdio.h>
#include<math.h>

int primecheck(long long);

int main(){
        long long num = 600851475143;
        long long max_prime_factor = -1;
        for(long long i = 2; i <= (long long)sqrt(num); i=i+1 ){
                if (num % i == 0){
                        if((primecheck(num/i) == 1)){
                                max_prime_factor = num/i;
                                break;
                        }
                        if((primecheck(i) == 1)){
                                max_prime_factor = i;
                        }
                }  
        }
        
        printf("%lld",max_prime_factor);  
        return 0;
}

int primecheck(long long a){
        long long i = 2;
        int flag=0;
        switch (a) {

        case 1: return 0;
        case 2: return 1;
        case 3: return 1;
        default: {  while (i <= (long long)sqrt(a))
                    {
                        if ((a % i) == 0)
                            flag = 1;
                        i++;
                    }
                    if (flag == 0)
                        return 1;
                    else 
                        return 0;

                }
        }
}