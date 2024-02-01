/*
** EPITECH PROJECT, 2023
** My_rpg
** File description:
** my_putchar.c
*/

#include "my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
