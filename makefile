all: football.exe temperature.exe

football.exe: football.c
	gcc -o football.exe football.c

temperature.exe: temperature.c
	gcc -o temperature.exe temperature.c

test: football.exe temperature.exe
	@echo -e "a\n-1\n25" | ./football.exe

	@echo -e "a\n-500\n3\n1\n2" | ./temperature.exe

clean:
	rm -f football.exe temperature.exe