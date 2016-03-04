#include<iostream>
#include<string>
#include "game.h"
#include<sstream>
using std::stringstream;


game::game(int id, string name, int year, string developers,string genre){
	this->id=id;
	this->name=name;
	this->year=year;
	this->developers=developers;
	this->genre=genre;
}
int game::getId(){
	return id;
}

string game::toString() const{
	stringstream ss;
	ss<<id<<"     "<<name<<"   "<<year<<"    "<<developers<<"     "<<genre<<"\n";
	return ss.str();
}
