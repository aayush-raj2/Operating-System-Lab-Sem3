// Q2_VForkExample.c
// Author: Aayush Raj
// Description: Demonstrates vfork() where child shares memory with parent.

#include <stdio.h>
#include <unistd.h>

int main() {
    int a = 5, b = 10;
    printf("Before vfork: a = %d, b = %d\n", a, b);
    int pid = vfork();

    if (pid == 0) {
        a = a + 1;
        b = b + 1;
        printf("In Child (vfork): a = %d, b = %d\n", a, b);
        _exit(0);
    } else {
        a = a - 1;
        b = b - 1;
        printf("In Parent (vfork): a = %d, b = %d\n", a, b);
    }
    return 0;
}

/*
🖥️ Output:
Before vfork: a = 5, b = 10
In Child (vfork): a = 6, b = 11
In Parent (vfork): a = 4, b = 9
*/
