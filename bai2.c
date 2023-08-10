#include <stdio.h>

int prime_num(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <num1> <num2>\n", argv[0]);
        return 1;
    }

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    if (a <= 0 || b <= 0 || a > b || b > 1000000000) {
        printf("Wrong input.\n");
        }
    else{
        printf("Prime numbers between %d and %d:\n", a, b);  
    for (int num = a; num <= b; num++) {  
        if (prime_num(num)) {
            printf("%d ", num);
        }
        }
    }
    return 0;
}
