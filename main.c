#include <allegro.h>
#include <stdbool.h>
#include "input.h"
#include "player.h"

int main(void) {
    Player player;
    InputState inputs;

    allegro_init();
    install_keyboard();

    set_color_depth(32);
    if (set_gfx_mode(GFX_AUTODETECT_WINDOWED, 800, 600, 0, 0) != 0) {
        allegro_message("Erreur mode graphique");
        return 1;
    }

    input_init();
     player_init(&player);

    while (!inputs.quit) {
        input_update(&inputs);
        player_update(&player, &inputs);

        clear_to_color(screen, makecol(0, 0, 0));

        rectfill(screen,
                 (int)(player.x - 20),
                 (int)(player.y - 15),
                 (int)(player.x + 20),
                 (int)(player.y + 15),
                 makecol(255, 255, 255));

        rest(16);
    }

    input_cleanup();
    return 0;
}
END_OF_MAIN();