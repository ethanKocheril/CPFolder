#include <cstdio>

int main() {
	unsigned int n;
	scanf("%u", &n);
	while(true) {
		printf("%u ", n);	
		if(n == 1) break;

		if(n % 2 == 0) {
			n /= 2;
		} else {
			n = n * 3 + 1;
		}
	}
	return n;
}
