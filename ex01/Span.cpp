#include "Span.hpp"

Span	&Span::operator=(const Span &rhs) {
	if (this == &rhs) return (*this);
	_vector.resize(rhs.getN());
	for (int i = 0; i < _vector.size(); i++) _vector[i] = rhs.getVector()[i];
	return (*this);
}

void	Span::addNumber(int i) {
	if (_vector.size() == _N)
		throw (Span::Full());
	_vector.push_back(i);
}

void	Span::addRange(std::vector<int>::iterator beg, std::vector<int>::iterator end) {
	if (_vector.size() + end - beg >= _N) throw (Span::Full());
	_vector.insert(_vector.end(), beg, end);
}

int	Span::shortestSpan() {
	if (!_vector.size() || _vector.size() == 1)
		throw (Span::Impossible());
	std::sort(_vector.begin(), _vector.end());
	int	shortest = _vector[1] - _vector[0];
	for (auto it = _vector.begin() + 2; it != _vector.end(); ++it) {
		if (*it - *(it - 1) < shortest)
			shortest =  *it - *(it - 1);
	}
	return (shortest);
}

int	Span::longestSpan() const {
	if (!_vector.size() || _vector.size() == 1)
		throw (Span::Impossible());
	return (*max_element(_vector.begin(), _vector.end()) \
		- *min_element(_vector.begin(), _vector.end()));
}
