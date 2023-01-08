#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	srand(time(0));
    int frasealeatoria = rand() % 10;
    printf("%d\n", frasealeatoria);
	
	return 0;
}