#include <stdio.h>

const char* OddEven(int a) {
    if (a % 2 == 0) {
        return "Even";
    } else {
        return "Odd";
    }
}

int main() {
    printf("%s", OddEven(2));
    return 0;
}