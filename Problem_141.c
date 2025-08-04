#include <stdio.h>
#include <string.h>

int main() {
    char s1[30];
    char s2[20];
    
    printf("\nEnter String-1 : ");
    scanf(" %[^\n]",&s1);
    
    printf("\nEnter String-2 :");
    scanf(" %[^\n]",&s2);
    
    printf("\nConcat only n characters : ");
	strncat(s1, s2, 4);  
    printf("%s", s1);
    return 0;
}
