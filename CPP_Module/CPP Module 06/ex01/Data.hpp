#ifndef DATA_HPP
#define DATA_HPP

#include <string>
#include <iostream>
struct Data {

	std::string smth;
	int	number;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);


#endif
