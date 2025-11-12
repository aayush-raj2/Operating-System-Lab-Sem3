// Q1_ForkExample.c
// Author: Aayush Raj
// Description: Demonstrates basic fork() and separate memory for parent and child.

#include <stdio.h>
#include <unistd.h>

int main() {
    int a = 5, b = 10, pid;
    printf("Before fork: a = %d, b = %d\n", a, b);
    pid = fork();

    if (pid == 0) {
        a = a + 1;
        b = b + 1;
        printf("In Child: a = %d, b = %d\n", a, b);
    } else {
        sleep(1);
        a = a - 1;
        b = b - 1;
        printf("In Parent: a = %d, b = %d\n", a, b);
    }
    return 0;
}

/*
🖥️ Sample Output:
Before fork: a = 5, b = 10
In Child: a = 6, b = 11
In Parent: a = 4, b = 9
*/
