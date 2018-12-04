#include "Window.h"
#include "Unit.h"
#include <iostream>
#include <exception>

int	main(int ac, char **av)
{
	int run = 1;

	if (ac != 3)
		return (1);
	Window win(atoi(av[1]), atoi(av[2]));
	win.init();

	Unit unit(win.center(), Vec2(10,10), "res/unit_0.png", &win);
	while (run)
	{
		unit.draw(&win);
		run = win.update();
		win.clear();
	}
	return (0);
}

//>$clang++ main.cpp Window.cpp Vec2.cpp Unit.cpp -F /Library/Frameworks  -framework SDL2 -framework SDL2_image