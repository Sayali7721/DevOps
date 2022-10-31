all: mult.c 
	gcc -g -Wall -o mult mult.c
clean:
	$(RM) mult
