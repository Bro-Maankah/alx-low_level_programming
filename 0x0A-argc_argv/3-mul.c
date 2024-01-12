#include <stdio.h>
#include "main.h"
/**
 * main - Multiplies two numbers.
 * @argc: Number of command line arguments.
 * @argv: Array that contains the program command line arguments.
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Error\n");
        return (1);
    }
    printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
    return (0);
}
