#include <unistd.h>
#include <string.h>

#include <stdio.h>
#include <string.h>
#include <unistd.h>

void ft_putstr(char *str)
{
    while (*str)
        write(1, str++, 1);
    write(1, "\n", 1);
}

/* Selection Sort */
int main(int argc, char **argv)
{
    if (argc < 2)
        return (1); // No hay nada que ordenar

    char *temp;
    int i, j, min_idx;

    // Selection Sort
    for (i = 1; i < argc - 1; i++)
    {
        min_idx = i;
        for (j = i + 1; j < argc; j++)
        {
            if (strcmp(argv[j], argv[min_idx]) < 0)
                min_idx = j;
        }
        if (min_idx != i)
        {
            temp = argv[i];
            argv[i] = argv[min_idx];
            argv[min_idx] = temp;
        }
    }

    // Imprimir el resultado
    for (i = 1; i < argc; i++)
        ft_putstr(argv[i]);

    return (0);
}

/* Bubble Sort */
int main(int argc, char **argv)
{
    if (argc < 2)
        return (1); // No hay nada que ordenar

    char *tmp;
    int i, j;

    // Bubble Sort
    for (i = 1; i < argc - 1; i++)
    {
        for (j = 1; j < argc - i; j++)
        {
            if (strcmp(argv[j], argv[j + 1]) > 0)
            {
                tmp = argv[j];
                argv[j] = argv[j + 1];
                argv[j + 1] = tmp;
            }
        }
    }

    // Imprimir el resultado
    for (i = 1; i < argc; i++)
        ft_putstr(argv[i]);

    return (0);
}