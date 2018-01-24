#include <allegro5\allegro.h>

int main() {
	ALLEGRO_DISPLAY *GameWindow = NULL;
	al_init();
	GameWindow = al_create_display(640, 400);
	al_set_window_position(GameWindow, 200, 200);
	al_set_window_title(GameWindow, "Ferny's Game");
	al_clear_to_color(al_map_rgb(0, 0, 0));
	al_flip_display();
	al_rest(10);
	al_destroy_display(GameWindow);
}