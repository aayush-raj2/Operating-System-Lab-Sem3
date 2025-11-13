// Q7_Fork_Complex.c
// Author: Aayush Raj
// Description: Complex fork expression to calculate process count.

#include <stdio.h>
#include <unistd.h>

int main() {
    fork();
    fork() && fork() || fork();
    fork();
    printf("Yes\n");
    return 0;
}

/*
🧮 Number of "Yes" printed = 20
(Depends on system, but pattern creates 20 processes)
*/
