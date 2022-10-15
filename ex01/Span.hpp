#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <bits/stdc++.h>

class	Span {

	public:

		Span(unsigned int N): _N(N) {}
		Span(const Span &src) { *this = src; }
		~Span() {}

		Span	&operator=(const Span &);

		void				addNumber(int);
		void				addRange(std::vector<int>::iterator, std::vector<int>::iterator);
		int					shortestSpan();
		int					longestSpan() const;
		unsigned int		getN() const { return (_N); }
		std::vector<int>	getVector() const { return (_vector); }

		class	Full: public std::exception {
			public:
				virtual const char*	what() const throw() {
					return ("Object is full");
				}
		};

		class	Impossible: public std::exception {
			public:
				virtual const char*	what() const throw() {
					return ("Can't evaluate distance");
				}
		};

	private:

		unsigned int		_N;
		std::vector<int>	_vector;

};

#endif
