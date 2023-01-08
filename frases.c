#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	srand(time(0));
    int frasealeatoria = rand() % 5;
    //printf("o numero gerado foi %d\n", frasealeatoria);
	
    switch(frasealeatoria){
    	case 0:
    	printf("acordei e me olhei no espelho\nainda a tempo \nde ver meu sonho virar pesadelo\n");
    	break;

    	case 1:
    	printf("tudo dito,\nnada feito,\nfito e deito\n");
    	break;

    	case 2:
    	printf("nuvens brancas passam em brancas nuvens\n");
    	break;

    	case 3:
    	printf("Isso de ser exatamente o que se eh ainda vai nos levar alem.\n");
    	break;

    	case 4:
    	printf("A voces, eu deixo o sono.\nO sonho, nao!\nEste eu mesmo carrego!\n");
    	break;

    }

	return 0;
}