#include <stdio.h>

int fibonacci() {
    int sum = 0;
    //Loop through all even numbers from 0 to 4 million
    for (int i = 0; i < 4000000; i += 2) {
        //Sum of all even values
        sum += i;
    }
    return sum;
}
int main() {
    printf("the sum of the even valued terms in a Fibonacci sequence of values less than four million = %i\n",fibonacci());
    return 0;
}