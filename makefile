Juego.exe:	main.o usuario.o game.o
	g++ main.o usuario.o game.o
main.o:	main.cpp game.h usuario.h
	g++ -c main.cpp 
usuario.o:	usuario.h usuario.cpp
	g++ -c usuario.cpp
game.o:	game.h game.cpp
	g++ -c game.cpp    		
