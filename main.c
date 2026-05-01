#include <allegro.h>
#include <stdbool.h>
#include "input.h"
#include "player.h"
#include "tir.h"

int main(void) {
    Player player;
    InputState inputs = {false, false, false, false, false};
    Tir tir;
    BITMAP* buffer;

    allegro_init();
    install_keyboard();

    set_color_depth(32);
    if (set_gfx_mode(GFX_AUTODETECT_WINDOWED, 800, 600, 0, 0) != 0) {
        allegro_message("Erreur mode graphique");
        return 1;
    }

    buffer = create_bitmap(SCREEN_W, SCREEN_H);
    if (!buffer) {
        allegro_message("Erreur creation buffer");
        return 1;
    }

    input_init();
    player_init(&player);
    tir_init(&tir);

    while (!inputs.quit) {
        float tir_x, tir_y;

        input_update(&inputs);
        player_update(&player, &inputs);

        if (inputs.shoot && !tir.actif) {
            player_get_tir_position(&player, &tir_x, &tir_y);
            tir_lancer(&tir, tir_x, tir_y);
        }

        tir_update(&tir);

        clear_to_color(buffer, makecol(0, 0, 0));

        rectfill(buffer,
                 (int)(player.x - 20),
                 (int)(player.y - 15),
                 (int)(player.x + 20),
                 (int)(player.y + 15),
                 makecol(255, 255, 255));

        tir_draw(&tir, buffer);

        blit(buffer, screen, 0, 0, 0, 0, SCREEN_W, SCREEN_H);

        rest(16);
    }

    destroy_bitmap(buffer);
    input_cleanup();
    return 0;
}
END_OF_MAIN();