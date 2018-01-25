#include <allegro5\allegro.h>
#include <allegro5\allegro_image.h>

int main() {
	ALLEGRO_DISPLAY *GameWindow = NULL; //Create a Display Window
	al_init(); //Set up Allegro
	al_init_image_addon(); //Set up Images

	GameWindow = al_create_display(1920, 1080); //Create Your Game Window
	al_set_window_position(GameWindow, 0, 0); //Positions Widnow on Screen
	al_set_window_title(GameWindow, "Ferny's Game"); //Window Title
	//loads bitmap from folders
	ALLEGRO_BITMAP *Photo1 = al_load_bitmap("Sanic.jpg");
	ALLEGRO_BITMAP *Photo2 = al_load_bitmap("Blacknogreyoutline.jpg");

	//clears a certain color of a background to transparent
	//255, 255, 255 clears white
	//al_convert_mask_to_alpha(Photo1, al_map_rgb(255, 255, 255));
	al_convert_mask_to_alpha(Photo2, al_map_rgb(255, 255, 255));
		/////////////////////////////////////////////////////////////////////////
		//Render Section
		/////////////////////////////////////////////////////////////////////////
		al_clear_to_color(al_map_rgb(0, 0, 0)); //Set GameWIndow Color

		//Calls Images
		//The order these things are drawn in matter
		al_draw_bitmap(Photo1, 700, 0, 0);
		al_draw_bitmap(Photo2, 0, 0, 0);

	al_flip_display(); //Write whatever is in memory to the screen

	al_rest(10); //Pauses Game

	al_destroy_display(GameWindow); //Clear Memory
}