/*
** EPITECH PROJECT, 2024
** fazzbizz
** File description:
** main
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

const char ERROR_MESSAGE[] =
    "Error: the second parameter must be greater than the first one.";

static void fazzbizz(int begin, int end)
{
    for (; begin <= end; begin++) {
        printf(begin % 9 == 0 && begin % 10 == 0 ? "FazzBizz\n"
            : begin % 9 == 0 ? "Bizz\n"
            : begin % 10 == 0 ? "Fazz\n"
            : "%d\n", begin);
    }
}

int main(int ac, char **av)
{
    int begin;
    int end;

    if (ac != 3) {
        return 84;
    }
    begin = atoi(av[1]);
    end = atoi(av[2]);
    if (begin > end) {
        write(2, ERROR_MESSAGE, sizeof(ERROR_MESSAGE));
        return 84;
    }
    fazzbizz(begin, end);
    return 0;
}
