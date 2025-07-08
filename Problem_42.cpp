#include <stdio.h>

int reverse(int);
int reverse(int n) {
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    return rev;
}

int main() {
    int num, orig, rev, temp1, temp2;
    printf("Enter a number: ");
    scanf("%d", &num);

    orig = num;
    rev = reverse(num);  

    while (rev > 0) {
        int digit = rev % 10;
        rev /= 10;


        int count = 0;
        temp1 = orig;
        while (temp1 > 0) {
            int d = temp1 % 10;
            if (d == digit)
                count++;
            temp1 /= 10;
        }

        if (count == 1) {
            printf("First non-repeating digit: %d\n", digit);
            return 0;
        }
    }

    printf("No non-repeating digit found.\n");
    return 0;
}

