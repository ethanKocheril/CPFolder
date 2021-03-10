#include <bits/stdc++.h>

int main(void) {
	int n;
	int sum = 0;
	scanf("%d", &n);
	int arr [n];

	for(int i = 0; i < n; i++) {
		scanf("%d",*arr + i);
	} 
	
	for(int i = 1; i < n; i++) {
		if(arr[i] - arr[i - 1] < 0) {
			sum -= (*arr + i) - (*arr + (i - 1));
		}
	}
	printf("%d", sum);
}
