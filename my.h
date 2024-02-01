/*
** EPITECH PROJECT, 2023
** my_hunter
** File description:
** my.h
*/

#ifndef INCLUDEE
    #define INCLUDEE
    #include <SFML/Graphics.h>
    #include <time.h>
    #include <unistd.h>
    #include <SFML/Audio.h>
    #include <stdlib.h>
    #define WIDTH 1920
    #define HEIGHT 1080
    #define SDRS sfRenderWindow_drawRectangleShape
    #define SDCS sfRenderWindow_drawCircleShape
    #define SFST sfSprite_setTexture
    #define SFCR sfSprite_create()
    #define SRWC sfRenderWindow_create
    #define SFCF sfTexture_createFromFile
    #define SFWC sfRenderWindow_create
    #define SFDS sfRenderWindow_drawSprite
    #define TO_DEG(x) ((x) * 180 / 3.14)

typedef struct sprite_s {
    sfSprite *sprite;
    sfTexture *texture;
} sprite_t;

typedef struct window_s {
    sfRenderWindow *window;
    sfEvent event;
    sfVideoMode mode;
} window_t;

typedef struct menu_s {
    sprite_t background;
} menu_t;

int events(window_t *window);
int display(window_t *window, menu_t *menu);
int my_strncmp(char const *s1, char const *s2, int n);
void info(void);
int loop(window_t *window, menu_t *menu);
int my_putstr(char const *str);
void my_putchar(char c);
int load_background_menu(menu_t *menu);
int load_sprites(menu_t *menu);
#endif
