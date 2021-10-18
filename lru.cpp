#include "lru.hpp"

LruCashe::LruCashe(size_t s)
{
	max_size = s;
	capscity = 0;
}

//LruCashe::LruCashe(const LruCashe& a);
//LruCashe& LruCashe::operator=(const LruCashe& a);
//~LruCashe::LruCashe()

size_t LruCashe::size()
{
	return capacity;
}


bool LruCashe::find(const std::string& value)
{
	if (data.find != data.end())
		return true;
	return false;
}

void LruCashe::add(const std::string& value)
{
	if (capasity == max_size)
	{
		std::string temp = cashe.pop_back();
		data.erase(temp);
		--capasity;
	}
	cashe.push_front(value);
	data.insert({value, cashe.first()});
	++capasity;
}

bool LruCashe::find_and_add(const std::string& value)
{
	bool res = find(value);
	if (res)
		add(value);
	return res;
}



