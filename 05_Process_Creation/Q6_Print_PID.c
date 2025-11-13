// Q6_Print_PID.c
// Author: Aayush Raj
// Description: Displays process IDs of parent and child.

#include <stdio.h>
#include <unistd.h>

int main() {
    int pid = fork();

    if (pid == 0) {
        printf("In Child Process:\n");
        printf("Parent Process ID: %d\n", getppid());
        printf("Child Process ID: %d\n", getpid());
    } else {
        sleep(1);
        printf("In Parent Process:\n");
        printf("Parent Process ID: %d\n", getpid());
        printf("Child Process ID: %d\n", pid);
    }
    return 0;
}

/*
🖥️ Output:
In Child Process
Parent Process ID : 18
Child Process ID  : 20
In Parent Process
Parent Process ID : 18
Child Process ID  : 20
*/
