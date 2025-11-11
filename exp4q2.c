// 2.	Declare a local variable inside a function and try to access it outside the function. 
// Compare this with accessing the global variable from within the function.

#include <stdio.h>

int avnimarks = 90; 

void showmarks() {
    int aaryanshimarks = 80;
    printf("Inside function:\n");
    printf("aaryanshi's Marks (local variable) = %d\n", aaryanshimarks);
    printf("avni's Marks (global variable) = %d\n", avnimarks);
}

int main() {
    showmarks();

    printf("\nOutside function:\n");
    printf("avni's Marks (global variable) = %d\n", avnimarks); 
    //printf("Trying to access aaryanshi's Marks (local variable) = %d", aaryanshimarks);
    
    return 0;
}