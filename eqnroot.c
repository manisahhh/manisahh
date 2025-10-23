#include<stdio.h>
#include<stdbool.h>

int main(){
	int x;
	bool found = false;
	
	printf("Finding at least ome root of the equation x^2 - 5x + 6 = 0\n");
	
	for (x = -100; x<= 100; ++x){
		int result = x * x - 5 * x + 6;
		
		if (result == 0) {
			printf("One root found: x = 2 %\n", x);
			found = true;
			break;
		}
	}
}
