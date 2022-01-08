compil:
	yacc -d -v projet.y
	lex projet.l
	gcc -c lex.yy.c
	gcc -o projet y.tab.c lex.yy.o -ll
	gcc -c tableLexico.c
	
arbre :
	gcc -Wall arbre.c -c
	gcc -Wall test_arbre.c arbre.o -o test_arbre

clean:
	rm projet
	rm y.tab.c
	rm y.output
	rm y.tab.h
	rm lex.yy.o
	rm lex.yy.c
	rm tableLexico.o
