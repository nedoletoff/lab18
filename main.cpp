#include "lru.hpp"

int main()
{
	LruCashe l(5);
	std::cout << "l - " << l << std::endl;
	l.find_and_add("rer");
	l.find_and_add("r");
	l.find_and_add("ab");
	l.find_and_add("adr");
	l.find_and_add("aa");
	std::cout << "l size - " << l.size() << std::endl;
	std::cout << "l - " << l << std::endl;
	l.find_and_add("oo");
	std::cout << "l size - " << l.size() << std::endl;
	std::cout << "l - " << l << std::endl;
	std::cout << l.find_and_add("oo") << std::endl;
	std::cout << "l size - " << l.size() << std::endl;
	std::cout << "l - " << l << std::endl;
	std::cout << l.find_and_add("AAA") << std::endl;
	std::cout << "l size - " << l.size() << std::endl;
	std::cout << "l - " << l << std::endl;


	return 0;
}

