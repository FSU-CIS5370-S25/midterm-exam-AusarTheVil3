/*
 * gcc forkprintf.c
 * ./a.out
 * ./a.out | cat
 */

#include <stdio.h>
#include <unistd.h>

int main()
{
    for (int i = 0; i < 2; i++)
    {
        fork();
        printf("Hello\n");
    }
}
