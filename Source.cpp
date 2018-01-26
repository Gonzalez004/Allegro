#include <allegro5\allegro.h>
#include <time.h>
int main() {
	srand(time(NULL));
	ALLEGRO_DISPLAY *GameWindow = NULL; //Create a Display Window
	al_init(); //Set up Allegro
	GameWindow = al_create_display(640, 400); //Create Your Game Window
	al_set_window_position(GameWindow, 200, 200); //Positions Widnow on Screen
	al_set_window_title(GameWindow, "Ferny's Game"); //Window Title
	while (true) {
		int colors = rand() % 3 + 1;
		switch (colors) {
		case 1:
			al_clear_to_color(al_map_rgb(250, 0, 0)); //Set it's Color
			al_flip_display(); //Write whatever is in memory to the screen
			system("pause");
			break;
		case 2:
			al_clear_to_color(al_map_rgb(0, 250, 0)); //Set it's Color
			al_flip_display(); //Write whatever is in memory to the screen
			system("pause");
			break;
		case 3:
			al_clear_to_color(al_map_rgb(0, 0, 250)); //Set it's Color
			al_flip_display(); //Write whatever is in memory to the screen
			system("pause");
			break;
		}
	}
	return 0;
	al_destroy_display(GameWindow); //Clear Memory

}