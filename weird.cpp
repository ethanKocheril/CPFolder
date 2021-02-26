#include <cstdio>

int main() {
	int n;
	scanf("%d", &n);
	while(true) {
		printf("%d ", n);	
		if(n == 1) break;

		if(n % 2 == 0) {
			n /= 2;
		} else {
			n = n * 3 + 1;
		}
	}
	return n;
}
