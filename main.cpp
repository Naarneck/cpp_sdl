#include "Window.h"
#include <iostream>
#include <exception>

int	main(int ac, char **av)
{
	int run = 1;
	Vec2 test1 = Vec2(0.1, 1.0);
	Vec2 test2 = Vec2(2, 25);
	Vec2 test3 = Vec2();

	test3 = test1 + test2;
	std::cout << test3 << std::endl;
	test3 = test3 * 5;
	std::cout << test3 << std::endl;
	test3.normalize();
	std::cout << test3 << std::endl;
	test3.dot(test2);
	std::cout << test3 << std::endl;
	test3 = test2 - test3;
	std::cout << test3 << std::endl;
	
	if (ac != 3)
		return (1);
	Window win(atoi(av[1]), atoi(av[2]));
	win.init();
	while (run)
	{
		run = win.update();
	}
	return (0);
}
