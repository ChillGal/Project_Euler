#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isPalindrome(char* str){
    char* rev = strrev(str);

    if (rev == str){
        return true;
    }
    return false;
}

int palindrome(){
    int num = 0;
    char* inv = 0;
    for (int i = 999; i > 0; i--){
        for (int j = 999; i > 0; i--){
            inv = (char *) (i * j);
            if (isPalindrome(inv)) {
                if ((i * j) > num) {
                    num = i * j;
                }
            }
        }
    }
    return (int) inv;
}

int main() {
    printf("The largest palindrome = %i\n", palindrome());
    return 0;
}
