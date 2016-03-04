#include "usuario.h"
#include<vector>
#include<string>
#include<cstring>
#include<sstream>
using std::stringstream;
using std::vector;


usuario::usuario(string Username, string Password){
	this->username=Username;
	this->password=Password;
}

bool usuario::addGame(int Id){
	
		games.push_back(Id);
		

}

bool usuario::deleteGame(int Id){
	bool valida=true;
	int posicion=0;
	for(int i=0;i<games.size();i++){
		if(games[i]== Id){
			valida=false;
			posicion=i;
		}
	}
	if(valida==false){
		games.erase(games.begin()+posicion);
	}else{
		return false;
	}


}

bool usuario::changePassword(string Password, string newpassword){
	if(this->password.compare(Password)==0){
		this->password=newpassword;
		return true;	
	}else{
		return false;	
	}
	
}

string usuario::getUsername(){
	return username;
}

bool usuario::isValidPassword(string Username,string Password){
	if(password.compare(Password)==0){
		return true;	
	}else{
		return false;
	}
}


string usuario::toString()const{
	stringstream ss;
	ss<<username;
	for(int x=0;x<games.size();x++){
		ss<<"  "<<games[x];	
	}
	return ss.str();	
}	

