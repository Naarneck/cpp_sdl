#include "Window.h"
#include <iostream>
#include <exception>
#include <unistd.h>

int	main(int ac, char **av)
{
	bool run = true;

	if (ac != 3)
		return (1);
	Window win(atoi(av[1]), atoi(av[2]));
	win.init();
	while (run)
	{
		win.update();
	}
	return (0);
};
