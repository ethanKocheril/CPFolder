#include <bits/stdc++.h>
#include <cstdio>

int recursiveSum(int n) {
	if(n == 1) {
		return 1;
	}

	return n + recursiveSum(n - 1);
}

int main(void) {
	int n;
	scanf("%d", &n);
	int sum = recursiveSum(n);
	int o;
	int sum2 = 0;

  for(int i = 0; i < n - 1; i++) {
    scanf("%d", &o);
    sum2 += o;
  }
  
  printf("%d\n", sum - sum2);
}


