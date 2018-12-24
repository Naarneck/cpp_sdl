#include <iostream>
#include <exception>

#include "Player.h"
#include "Enemy.h"
#include "Window.h"
#include "Unit.h"

int	main(int ac, char **av){
	int run = 1;
	int w = 500;
	int h = 500;

	if (ac == 3){
		w = atoi(av[1]);
		h = atoi(av[2]);
	}
	else if (ac != 3 && ac != 1)
		return (1);
	Window win(w, h);	
	win.init();

	// Unit unit(win.center(), Vec2(10, 10), "res/unit_0.png", &win);
	Player player(win.center(), Vec2(10, 10), "res/unit_1.png", &win);
	Enemy enemy(Vec2(0, 0), Vec2(10, 10), "res/unit_0.png", &win);
	while (run)	{
		// unit.draw(&win);
		player.draw(&win);
		enemy.draw(&win);
		// enemy.moveTo(win.center());
		enemy.moveTo(player.getPos());
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

//clang++ main.cpp Window.cpp Vec2.cpp Unit.cpp Player.cpp Enemy.cpp -F /Library/Frameworks  -framework SDL2 -framework SDL2_image
//clang++ main.cpp Window.cpp Vec2.cpp Unit.cpp Player.cpp Enemy.cpp -F ~/Library/Frameworks  -framework SDL2 -framework SDL2_image