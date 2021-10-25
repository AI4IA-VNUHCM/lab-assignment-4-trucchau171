/*
1.	Write a program to construct the Pascal triangle with the given integer n.
Ex:
______________________________________
| Input: 3                           |
| Output:                            |
| 1                                  |
| 1 1                                |
| 1 2 1                              |
| 1 3 3 1                            |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Ex1(int n){
	//Your codes here
    int array[n + 1][100];
	for (int i = 0; i <= n; i++) {
		array[i][0] = 1;
		array[i][i] = 1;
		for (int j = 1; j <= i - 1; j++) {
			array[i][j] = array[i - 1][j - 1] + array[i - 1][j];
		}
	}
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= i; j++) {
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}

}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	
	Ex1(testcase);
	return 0;
}
