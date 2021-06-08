#include <stdio.h>
#include <math.h>
int primeFactor(long long num){
    long long pfactor = 0;
    //Loop from 0 to the number
    for (long long i = 0; i < num; i++){
        if (fmodf(i,num) == 0){
            if ( i > pfactor){
                pfactor = i;
            }
        }
    }
    return pfactor;

}

int main(){
    printf("The largest prime factor of the number 600851475143 = %i",primeFactor(600851475143));
    return 0;
}
