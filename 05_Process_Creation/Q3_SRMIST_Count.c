// Q3_SRMIST_Count.c
// Author: Aayush Raj
// Description: Finds how many times "SRMIST" is printed.

#include <stdio.h>
#include <unistd.h>

int main() {
    fork();
    fork();
    fork();
    printf("SRMIST\n");
    return 0;
}

/*
🧮 Total number of processes = 2^3 = 8
🖥️ Output:
"SRMIST" printed 8 times
*/
