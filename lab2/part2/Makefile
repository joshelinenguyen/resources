all: bin/pokemon

bin/pokemon: main.cpp bin/attackMove.o bin/battle.o bin/pokemon.o
    g++ -g -Wall main.cpp bin/attackMove.o bin/battle.o bin/pokemon.o -o bin/pokemon
bin/attackMove.o: attackMove.h attackMove.cpp
    g++ -g -Wall -c attackMove.cpp -o bin/attackMove.o
bin/battle.o: battle.h battle.cpp
    g++ -g -Wall -c battle.cpp -o bin/battle.o
bin/pokemon.o: pokemon.h pokemon.cpp
    g++ -g -Wall -c pokemon.cpp -o bin/pokemon.o