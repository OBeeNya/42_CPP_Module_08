#include "easyfind.hpp"

int	main(void) {

	std::array<int, 5>	array{{1, 2, 3, 4, 5}};
	std::vector<int>	vector(5, 5);
	std::deque<int>		deque(3, 3);
	std::list<int>		list(2, 2);

	std::cout << std::endl;
	std::cout << " *** Finding an int in an array *** " << std::endl;
	try { std::cout << std::boolalpha << easyfind(array, 3) << std::endl; }
	catch (std::exception &e) { std::cout << e.what() << std::endl; }

	std::cout << std::endl;
	std::cout << " *** Trying to find an absent int in an array *** " << std::endl;
	try { std::cout << std::boolalpha << easyfind(array, 6) << std::endl; }
	catch (std::exception &e) { std::cout << e.what() << std::endl; }

	std::cout << std::endl;
	std::cout << " *** Finding an int in a vector *** " << std::endl;
	try { std::cout << std::boolalpha << easyfind(vector, 5) << std::endl; }
	catch (std::exception &e) { std::cout << e.what() << std::endl; }

	std::cout << std::endl;
	std::cout << " *** Trying to find an absent int in a vector *** " << std::endl;
	try { std::cout << std::boolalpha << easyfind(vector, 3) << std::endl; }
	catch (std::exception &e) { std::cout << e.what() << std::endl; }

	std::cout << std::endl;
	std::cout << " *** Finding an int in a deque *** " << std::endl;
	try { std::cout << std::boolalpha << easyfind(deque, 3) << std::endl; }
	catch (std::exception &e) { std::cout << e.what() << std::endl; }

	std::cout << std::endl;
	std::cout << " *** Trying to find an absent int in a deque *** " << std::endl;
	try { std::cout << std::boolalpha << easyfind(deque, 2) << std::endl; }
	catch (std::exception &e) { std::cout << e.what() << std::endl; }

	std::cout << std::endl;
	std::cout << " *** Finding an int in a list *** " << std::endl;
	try { std::cout << std::boolalpha << easyfind(list, 2) << std::endl; }
	catch (std::exception &e) { std::cout << e.what() << std::endl; }

	std::cout << std::endl;
	std::cout << " *** Trying to find an absent int in a list *** " << std::endl;
	try { std::cout << std::boolalpha << easyfind(list, 1) << std::endl; }
	catch (std::exception &e) { std::cout << e.what() << std::endl; }

	std::cout << std::endl;
	return (0);
}
