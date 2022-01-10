compil:
	yacc -d -v projet.y
	lex projet.l
	gcc -c lex.yy.c tableLexico.c tableRepre.c pregion.c tableDecla.c arbre.c
	gcc -o projet y.tab.c tableLexico.o arbre.o tableRepre.o pregion.o tableDecla.o lex.yy.o -ll -ly
	
arbre :
	gcc -Wall arbre.c -c
	gcc -Wall test_arbre.c arbre.o -o test_arbre

clean:
	rm y.tab.c
	rm y.output
	rm y.tab.h
	rm lex.yy.o
	rm lex.yy.c
	rm tableLexico.o
	rm tableDecla.o
	rm pregio.o
	rm tableRepre.o
	rm arbre.o
	rm projet