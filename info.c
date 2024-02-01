/*
** EPITECH PROJECT, 2023
** My_rpg
** File description:
** info.c
*/

#include "my.h"

void info(void)
{
    char *sentence = "Air traffic simulation panel\n"
    "\n"
    "USAGE\n"
    "  ./my_radar [OPTIONS] path_to_script\n"
    "    path_to_script   The path to the script file.\n"
    "OPTIONS\n"
    "  -h\t\t\tprint the usage and quit.\n"
    "USER INTERACTIONS\n"
    "  ‘L’ key\tenable/disable hitboxes and areas.\n"
    "  ‘S’ key\tenable/disable sprites.\n"
    "  'ESCAPE' key\tto quit the game\n";

    my_putstr(sentence);
}