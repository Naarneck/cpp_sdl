#include <iostream>
#include <exception>

#include "Player.h"
#include "Window.h"
#include "Unit.h"

int	main(int ac, char **av){
	int run = 1;

	if (ac != 3)
		return (1);
	Window win(atoi(av[1]), atoi(av[2]));
	win.init();

	Unit unit(win.center(), Vec2(10,10), "res/unit_0.png", &win);
	Player player(Vec2(15,15), Vec2(10,10), "res/unit_2.png", &win);
	while (run)	{
		unit.draw(&win);
		player.draw(&win);
		run = win.update();
		//test
		if (run == 2)
			player.moveUp();
		if (run == 3)
			player.moveLeft();
		if (run == 4)
			player.moveDown();
		if (run == 5)
			player.moveRight();
		//test
		win.clear();
	}
	return (0);
}

//>$clang++ main.cpp Window.cpp Vec2.cpp Unit.cpp Player.cpp -F /Library/Frameworks  -framework SDL2 -framework SDL2_image
