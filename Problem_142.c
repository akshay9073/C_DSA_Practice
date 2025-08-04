#include <stdio.h>

int main() {
    char s[50];
    int n = 10;
    
    sprintf(s, "The value is %d", n);
    printf("The String is : %s", s);
    return 0;
}
