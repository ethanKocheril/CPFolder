#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("paint.in", "r", stdin);
	freopen("paint.out", "w", stdout);

	int a, b, c, d;
	cin >> a >> b >> c >> d;

	int ans = 0;
	ans += b-a; // add length of first interval
	ans += d-c; // add length of second interval
	// if intervals intersect, subtract the length of the intersection
	ans -= max(min(b, d)-max(a, c), 0);

	cout << ans << "\n";
}


