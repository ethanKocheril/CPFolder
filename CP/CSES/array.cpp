#include <bits/stdc++.h>

int main(void) {
	int n;
	long long sum = 0;
	scanf("%d", &n);
	long long arr [n];
	long long diff = 0;

	for(int i = 0; i < n; i++) {
		std::cin >> arr[i];
	} 
	
	for(int i = 1; i < n; i++) {
		diff = arr[i - 1] - arr[i];
		if(diff > 0) {
			sum += diff;
			arr[i] += diff;
		}
	}
	printf("%lli\n", sum);
}
