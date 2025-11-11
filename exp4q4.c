// 4.	Declare a static local variable inside a function. 
// Observe how its value persists across function calls.

#include <stdio.h>

void showMarks() {
    static int avniMarks = 10;
    avniMarks++; 
    printf("avni's Marks = %d\n", avniMarks);
}

int main() {
    showMarks();
    showMarks();
    showMarks();
    return 0;
}