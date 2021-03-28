#include <bits/stdc++.h>

int main(void) {
	int t; 
	scanf("%d", &t);
	int a[t], b[t];
	for(int i = 0; i < t; i++) {
		int *y, *x;
		y = &b[0];
		x = &a[0];
		scanf("%d %d", *(y + i),*(x + i));
	}
	int n = sizeof(a);
	std::sort(a, a+n);
	std::sort(b, b+n);
	for(int i = 0; i < n; i++) {
		printf("%d ", *(b + i));
	}       		       

	for(int i = 0; i < n; i++) {
		printf("%d ", *(a + i));
	}
}
