#ifndef CANONICAL_HPP
# define CANONICAL_HPP

# include <iostream>

class Canonical
{
	public:
		Canonical();
		virtual ~Canonical();
		Canonical(const Canonical& copy);
		Canonical& operator=(const Canonical& op);
};

# endif