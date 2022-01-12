compil:
	yacc -d -v projet.y
	lex projet.l
	gcc -c arbre.c lex.yy.c tableLexico.c tableRepre.c tableRegion.c pregion.c tableDecla.c arbre.c
	gcc -o projet y.tab.c tableLexico.o arbre.o tableRepre.o tableRegion.o pregion.o tableDecla.o lex.yy.o -ll -ly
clean:
	rm y.tab.c
	rm y.output
	rm y.tab.h
	rm lex.yy.o
	rm lex.yy.c
	rm arbre.o
	rm tableRegion.o
	rm tableLexico.o
	rm tableDecla.o
	rm pregion.o
	rm tableRepre.o
	rm projet