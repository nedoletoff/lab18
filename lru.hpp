#pragma once
#include <list>
#include <map>
#include <string>
#include <iostream>

class LruCashe
{
	private:
		size_t max_size;
		size_t capacity;
		std::list<std::string> cashe;
<<<<<<< HEAD
		std::map<std::string, std::list<std::string>::iterator> data;
	private:
		void replace(const std::string&);
		void add(const std::string&);
=======
		std::map<std::string, decltype(cashe.first())> data;
>>>>>>> ab495ab268e5fcb54c6ca22bf8b4b2a47a7061c5
	public:
		LruCashe(size_t);
//		LruCashe(const LruCashe&);
//		LruCashe& operator=(const LruCashe&);
//		~LruCashe();
		size_t size();
		bool find(const std::string&);
<<<<<<< HEAD
		bool find_and_add(const std::string&);

	friend std::ostream& operator<<(std::ostream& os, const LruCashe& value)
{
//	os << value.cashe;
	for(std::string e : value.cashe)
		os << e <<  " ";
	return os;
}
};
=======
		void add(const std::string&);	
		bool find_and_add(const std::string&);

		friend	ostream& operator<<(ostream& os, const LruCashe& value)
		{
		    os << value.cache;
		    return os;
		}
};

>>>>>>> ab495ab268e5fcb54c6ca22bf8b4b2a47a7061c5
