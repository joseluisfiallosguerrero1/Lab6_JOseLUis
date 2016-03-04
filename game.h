#pragma once
#include <string>
using std::string;

class game{

	int id;
	string name;
	int year;
	string developers;
	string genre;
public:
	game(int id, string name, int year, string developers,string genre);
	int getId();
	string toString() const;
};
