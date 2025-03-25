all: football.exe temperature.exe #targets the functions to make football.exe and temperature.exe

football.exe: football.c #compiling command in the terminal to make the exe
	gcc -o football.exe football.c

temperature.exe: temperature.c #compiling command in the terminal to make the exe
	gcc -o temperature.exe temperature.c

test: football.exe temperature.exe #make test will test use the commands inputted and run through so error handling can be checked
#this starts by opening football.exe and then inputting invalid inputs to check for errors, the invalid inputs are a character, a negative number, and then finally a valid number
	@echo -e "a\n-1\n25" | ./football.exe
#this opens temperature and then goes through the invalid entries. a character a, then it enters a valid -500 degrees, but choosing 3 in the next option is invalid because kelvin cannot be negative. then it finally picks 2 valid inputs to see the final result
	@echo -e "a\n-500\n3\n1\n2" | ./temperature.exe

clean: #this just cleans up the .exe files to recompile them later
	rm -f football.exe temperature.exe