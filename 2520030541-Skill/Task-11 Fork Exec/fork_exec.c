#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
    pid_t pid;

    printf("Parent process started.\n");
    printf("Parent PID: %d\n", getpid());

    pid = fork();

    if (pid < 0)
    {
        printf("Fork failed!\n");
        return 1;
    }
    else if (pid == 0)
    {
        printf("\n--- Child Process ---\n");
        printf("Child PID: %d\n", getpid());
        printf("Child is launching the PDF viewer using exec().\n");

        execlp("open", "open", "lecture_notes.pdf", NULL);

        perror("exec failed");
        exit(1);
    }
    else
    {
        printf("\n--- Parent Process ---\n");
        printf("Parent is waiting for the child process.\n");

        wait(NULL);

        printf("Child process completed.\n");
        printf("Parent process finished.\n");
    }

    return 0;
}