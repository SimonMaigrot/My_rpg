/*
** EPITECH PROJECT, 2023
** My_rpg
** File description:
** load_backgrounds.c
*/

#include "my.h"

int load_background_menu(menu_t *menu)
{
    menu->background.sprite = sfSprite_create();
    menu->background.texture = sfTexture_createFromFile("assets/menu.png", NULL);
    sfSprite_setTexture(menu->background.sprite, menu->background.texture, sfTrue);
    sfSprite_setScale(menu->background.sprite, (sfVector2f){5, 5});
    sfSprite_setPosition(menu->background.sprite, (sfVector2f){-250, -400});
    return 0;
}

int load_background_game()
{
    return 0;
}