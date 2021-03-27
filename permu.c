#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n + 1; i++) {
		
		for(int j = 1; j < n + 1; j++) {
			printf("%d ", j);
		}
	}
}
