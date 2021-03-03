#include <cstdio>

int main() {
	long long n;
	scanf("%lli", &n);
	while(true) {
		printf("%lli ", n);	
		if(n == 1) break;

		if(n % 2 == 0) {
			n /= 2;
		} else {
			n = n * 3 + 1;
		}
	}
//In the case where you print the output, either return nothing or 0.
	return 0;
}
