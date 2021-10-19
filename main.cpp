#include "lru.hpp"

int main()
{
	LruCashe l(5);
	std::cout << "l - " << l << std::endl;
<<<<<<< HEAD
	std::cout << "l size - " << l.size() << std::endl;
=======
>>>>>>> ab495ab268e5fcb54c6ca22bf8b4b2a47a7061c5
	l.find_and_add("rer");
	l.find_and_add("r");
	l.find_and_add("ab");
	l.find_and_add("adr");
	l.find_and_add("aa");
	std::cout << "l size - " << l.size() << std::endl;
	std::cout << "l - " << l << std::endl;
	l.find_and_add("oo");
<<<<<<< HEAD
	l.find_and_add("adr");
	std::cout << "l size - " << l.size() << std::endl;
	std::cout << "l - " << l << std::endl;
	std::cout << "is oo in list - " <<  l.find_and_add("oo") << std::endl;
	std::cout << "l size - " << l.size() << std::endl;
	std::cout << "l - " << l << std::endl;
	std::cout << "is AAA in list - " << l.find_and_add("AAA") << std::endl;
=======
	std::cout << "l size - " << l.size() << std::endl;
	std::cout << "l - " << l << std::endl;
	std::cout << l.find_and_add("oo") << std::endl;
	std::cout << "l size - " << l.size() << std::endl;
	std::cout << "l - " << l << std::endl;
	std::cout << l.find_and_add("AAA") << std::endl;
>>>>>>> ab495ab268e5fcb54c6ca22bf8b4b2a47a7061c5
	std::cout << "l size - " << l.size() << std::endl;
	std::cout << "l - " << l << std::endl;


	return 0;
}

