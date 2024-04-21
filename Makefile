objects = src/game.o
bin = bin/

all: dir tictactoe

dir: 
	mkdir -p bin

tictactoe: $(objects)
	cc -o $(bin)/tictactoe $(objects)
clean:
	rm -rf $(bin)
	rm -f *~
	rm -f src/*~
	rm -f src/*.o
