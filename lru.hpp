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
		std::map<std::string, decltype(cashe.first())> data;
	public:
		LruCashe(size_t);
//		LruCashe(const LruCashe&);
//		LruCashe& operator=(const LruCashe&);
//		~LruCashe();
		size_t size();
		bool find(const std::string&);
		void add(const std::string&);	
		bool find_and_add(const std::string&);

		friend	ostream& operator<<(ostream&, const LruCashe&);
};

