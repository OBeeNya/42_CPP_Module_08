#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <iostream>
# include <array>
# include <vector>
# include <deque>
# include <list>

template <typename T>
bool	easyfind(T container, int i) {
	if (std::find(container.begin(), container.end(), i) != container.end())
		return (true);
	else throw (std::invalid_argument("Argument not found"));
}

#endif
