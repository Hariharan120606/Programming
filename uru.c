#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    
    printf("Original String: %s\n", str);
    
    strrev(str);
    
    printf("Reversed String: %s\n", str);
    
    return 0;
}

