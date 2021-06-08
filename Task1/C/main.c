#include <stdio.h>

int multipleOf3(){
    int sum = 0;
    //Loop through all numbers from 0 to 1000
    for (int i = 0; i < 1000; i++)
        //Check if multiple of 3 or 5
        if (i % 3  == 0 || i % 5 ==0){
            //Add value of i to sum
            sum += i;
        }
    return sum;
}
int main() {
    printf("The sum of all the multiples of 3 or 5 below 1000 = %i\n",multipleOf3());
    return 0;
}
