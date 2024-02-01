/*
** EPITECH PROJECT, 2023
** My_rpg
** File description:
** main.c
*/

#include "my.h"

void create_window(window_t *window)
{
    window->mode.width = WIDTH;
    window->mode.height = HEIGHT;
    window->mode.bitsPerPixel = 32;
    window->window = sfRenderWindow_create(window->mode,
    "My_rpg", sfDefaultStyle, NULL);
}

int error_env(char **env)
{
    int count = 0;

    for (int i = 0; env[i] != NULL; i++) {
        if (my_strncmp(env[i], "DISPLAY=", 8) == 0) {
            count += 1;
        }
        if (my_strncmp(env[i], "XAUTHORITY=", 11) == 0) {
            count += 1;
        }
    }
    return count;
}

int main(int argc, char **argv, char **env)
{
    window_t window;
    menu_t menu;

    // if (error_env(env) != 2)
    //     return 84;
    if (argc > 2)
        return 84;
    if (argc == 1) {
        create_window(&window);
        load_sprites(&menu);
        loop(&window, &menu);
    }
    if (argc == 2) {
        if (argv[1][0] == '-' && argv[1][1] == 'h') {
            info();
            return 0;
        }
        return 84;
    }
    return 0;
}
