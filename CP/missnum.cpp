#include <cstdio>
#include <iostream>
int main(void) {
	int n;
	scanf("%d", &n);
	int sum = recursiveSum(n);
	int *v;
	v = malloc(n * sizeof(int));
  for(i = 0; i < n; i++)
    scanf("%d", &v[i]);
  int sum2 = recursiveSum(v[n - 1]);

  printf("%d", sum - sum2);
}

int recursiveSum(int n) {
	if(n == 1) {
		return 1;
	}

	return n + recursiveSum(n - 1);
}
