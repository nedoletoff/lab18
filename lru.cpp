#include "lru.hpp"

LruCashe::LruCashe(size_t s)
{
	max_size = s;
<<<<<<< HEAD
	capacity = 0;
}

=======
	capscity = 0;
}

//LruCashe::LruCashe(const LruCashe& a);
//LruCashe& LruCashe::operator=(const LruCashe& a);
//~LruCashe::LruCashe()

>>>>>>> ab495ab268e5fcb54c6ca22bf8b4b2a47a7061c5
size_t LruCashe::size()
{
	return capacity;
}


bool LruCashe::find(const std::string& value)
{
<<<<<<< HEAD
	if (data.find(value) != data.end())
=======
	if (data.find != data.end())
>>>>>>> ab495ab268e5fcb54c6ca22bf8b4b2a47a7061c5
		return true;
	return false;
}

void LruCashe::add(const std::string& value)
{
<<<<<<< HEAD
	if (capacity == max_size)
	{
		auto it = cashe.rbegin();
		std::string temp = *it;
		cashe.pop_back();
		data.erase(temp);
		--capacity;
	}
	cashe.push_front(value);
	data.insert({value, cashe.begin()});
	++capacity;
=======
	if (capasity == max_size)
	{
		std::string temp = cashe.pop_back();
		data.erase(temp);
		--capasity;
	}
	cashe.push_front(value);
	data.insert({value, cashe.first()});
	++capasity;
>>>>>>> ab495ab268e5fcb54c6ca22bf8b4b2a47a7061c5
}

bool LruCashe::find_and_add(const std::string& value)
{
	bool res = find(value);
<<<<<<< HEAD
	if (!res)
		add(value);
	else
		replace(value);
	return res;
}

void LruCashe::replace(const std::string& value)
{
	auto ad = data[value];
	cashe.erase(ad);
	cashe.push_front(value);
	data[value] = cashe.begin();
}
=======
	if (res)
		add(value);
	return res;
}



>>>>>>> ab495ab268e5fcb54c6ca22bf8b4b2a47a7061c5
