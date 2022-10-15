#include "Span.hpp"

int	main(void) {

	// {
	// 	Span sp = Span(5);
	// 	sp.addNumber(6);
	// 	sp.addNumber(3);
	// 	sp.addNumber(17);
	// 	sp.addNumber(9);
	// 	sp.addNumber(11);
	// 	std::cout << sp.shortestSpan() << std::endl;
	// 	std::cout << sp.longestSpan() << std::endl;
	// }

	{
		Span	span(5);

		std::cout << std::endl;
		std::cout << " *** Trying to find the shortest span with no element ***" << std::endl;
		try { std::cout << span.shortestSpan() << std::endl; }
		catch (std::exception &e) { std::cerr << e.what() << std::endl; }

		std::cout << std::endl;
		std::cout << " *** Trying to add more elements than possible ***" << std::endl;
		for (int i = 0; i < 5; i++) span.addNumber(i);
		try { span.addNumber(5); }
		catch (std::exception &e) { std::cerr << e.what() << std::endl; }

		std::cout << std::endl;
		std::cout << " *** Finding the shortest spam ***" << std::endl;
		try { std::cout << span.shortestSpan() << std::endl; }
		catch (std::exception &e) { std::cerr << e.what() << std::endl; }

		std::cout << std::endl;
		std::cout << " *** Finding the longest spam ***" << std::endl;
		try { std::cout << span.longestSpan() << std::endl; }
		catch (std::exception &e) { std::cerr << e.what() << std::endl; }
	}

	{
		Span				span(1000);
		std::vector<int>	range = {87, 10};

		std::cout << std::endl;
		std::cout << " *** Adding range until span is full ***" << std::endl;
		while (1) {
			try { span.addRange(range.begin(), range.end());
				std::cout << "range added..." << std::endl;
			}
			catch (std::exception &e) { std::cout << e.what() << std::endl; }
		}
	}

	std::cout << std::endl;
	return (0);
}
