/* File        : main.c (Lab 6 Core Task 3)
 * Description : The program is a simple game whereby the player scores 1 point whenever he/she clicks on a red square that appears on the screen for a
 *               short amount of time. It uses functions from the SwinGame SDK.
 *
 * Name        : Tan Fong Jian
 * Student ID  : 100069674
 * Lab Exercise 6
 * Last Modified 14 Oct 2017 06:16 PM
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include "SwinGame.h"

int main()
{
	int window_width = 800, window_height = 600;
	int square_length = 100;
	int x_coord, y_coord;
	char score_buffer[4]; /* char array to store the score as a string for output */
	int score = 0;
	
	timer delay = create_timer();
	point2d current_mouse_position;
	
    open_graphics_window("Hello World", window_width, window_height);
    show_swin_game_splash_screen();
	srand((unsigned)time(NULL));
	
	/* Initialize x- and y-coordinates as random values */
	x_coord = rand() % (window_width - square_length + 1);
	y_coord = rand() % (window_height - square_length + 1);
	
	/* Start delay timer */
	start_timer(delay);
	
    do
    {
        process_events();
        
        clear_screen_to(ColorWhite);
		
		/* Draw solid rectangle at coordinates at the time */
		fill_rectangle(ColorRed, x_coord, y_coord, square_length, square_length);
        
		/* Display player's score */
        draw_simple_text("Your Score:", ColorBlue, 0, 0);
		sprintf(score_buffer, "%i", score);
		draw_simple_text(score_buffer, ColorBlue, 100, 0);
		
		/* Check if left mouse button is clicked */
		if(mouse_clicked(LEFT_BUTTON))
		{
			current_mouse_position = mouse_position(); /* Store current mouse position */
			
			/* Check if the player clicked within the red square; if yes, increment score by 1 */
			if(current_mouse_position.x >= x_coord && current_mouse_position.x <= x_coord + square_length)
				if(current_mouse_position.y >= y_coord && current_mouse_position.y <= y_coord + square_length)
					score++;
		}
		
		/* Update the x- and y-coordinates after 1 second delay */
		if(timer_ticks(delay) > 1000)
		{
			reset_timer(delay); /* Reset delay timer to 0 */
			x_coord = rand() % (window_width - square_length + 1);
			y_coord = rand() % (window_height - square_length + 1);
		}
        
        refresh_screen_restrict_fps(60);
    } 
	while(!window_close_requested());
	
	free_timer(&delay);
    
    return 0;
}
