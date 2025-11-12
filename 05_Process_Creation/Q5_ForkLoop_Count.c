// Q5_ForkLoop_Count.c
// Author: Aayush Raj
// Description: Finds how many processes are created in a loop.

#include <stdio.h>
#include <unistd.h>

int main() {
    int n = 3;
    for (int i = 0; i < n; i++)
        fork();

    printf("Process running\n");
    return 0;
}

/*
🧮 Total processes created = 2^n = 8 (for n = 3)
🖥️ Output:
"Process running" printed 8 times
*/
