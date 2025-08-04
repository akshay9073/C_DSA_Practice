#include <stdio.h>
#include <string.h>

int main() {
    char src[20];
    char dest[20];
    
    printf("\nEnter String-1 : ");
    scanf(" %[^\n]",&s1);
    
    printf("\nCopy the n-bytes from String\n");
    strncpy(dest, src, 4);
    printf("%s", dest);
    return 0;
}
