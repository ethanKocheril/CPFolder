#include <bits/stdc++.h>

int main(void) {
	int t; 
	int spiral[][];
	scanf("%d", &t);
	for(int i = 0; i < t; i++) {
		int y, x;
		scanf("%d %d", &y, &x);
		printf("%d", spiral[x][y]);	
	}
}
