#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * main - creates 5 zombies
 * Return: always 0
 */
int main(void)
{
    int i;

    for (i = 0; i < 5; i++)
    {
        pid_t pid = fork();
        if (pid == 0)
        {
            printf("Zombie process created, PID: %d\n", getpid());
            while (1)
            {
                sleep(1);
            }
            exit(0);
        }
        else if (pid < 0)
        {
            printf("Fork failed\n");
            exit(1);
        }
    }

    while (1)
    {
        sleep(1);
    }

    return 0;
}

