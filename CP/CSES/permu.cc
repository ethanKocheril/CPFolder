#include <bits/stdc++.h>

int main() {
	int n;
	scanf("%d", &n);
	if(n == 2 || n == 3) {
		printf("NO SOLUTION\n");
		return 0;
	}
	for(int i = 0; i < n; i+=2) {
		printf("%d ", n - i);
	}

	for(int i = 1; i < n; i+=2) {
		printf("%d ", n - i);
	}
}
