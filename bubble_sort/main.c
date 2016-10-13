#include <stdio.h>
#include <stdlib.h>

#include "common.h"

#define SAMPLE_TNT   10


int main(int argc, char *argv[])
{
	int tst_arry[SAMPLE_TNT];	
	int i = 0;

	for(i = 0; i < SAMPLE_TNT; i++){
		tst_arry[i] = rand() % 100;
	}

	bubble_sort(tst_arry, SAMPLE_TNT);

	for(i = 0; i < SAMPLE_TNT; i++){
		printf("%d ", tst_arry[i]);
	}
	
	printf("\n");

	return 0;

}
