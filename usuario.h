#pragma once
#include<string>
#include<vector>
#include<cstring>

using std::string;
using std::vector;


class usuario{
	string username;
	string password;
	vector<int> games;
	
public:
	usuario(string,string);
	bool addGame(int Id);
	bool deleteGame(int Id);
	bool changePassword(string Password,string newpassword );
	string getUsername();
	bool isValidPassword(string Username,string Password);
	string toString()const;	
};
	
