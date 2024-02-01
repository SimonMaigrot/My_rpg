/*
** EPITECH PROJECT, 2023
** My_rpg
** File description:
** my_strncmp.c
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;
    int nbr;

    while ((i != n) && (s1[i] == s2[i]))
        i++;
    nbr = (s1[i] - s2[i]);
    return (nbr);
}
