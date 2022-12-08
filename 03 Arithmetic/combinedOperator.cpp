#include <stdio.h>
int main () {
    int x = 10;
    printf("%d\n", x);	// 10

    x = x + 20;
    printf("%d\n", x);	// 30

	x += 30;
	printf("%d\n", x);	// 60
	
	int y = 10;
	x /= y;
	printf("%d\n", x);	// 6
	
// performance
// how we measure the performance
// of our algorithm?
// 1. output		 --> correct
// 2. time-efficient --> low time complexity (e.g. O(log n) < O (N^2))
// 3. memory (RAM)	 --> use effective data structure / less memory consumption
}

