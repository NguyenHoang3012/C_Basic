#include <stdio.h>
int add(int, int); //prototype is defined to avoid the warning the function is call but not defined 
int main() { 
    int result = add(5, 3);  // Calling the function before definition
    printf("The result is: %d\n", result);
    return 0;
}

int add(int a, int b) {
    return a + b;
}
