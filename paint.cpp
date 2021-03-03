#include <iostream>
#include <vector>
int main(void) {
	freopen("paint.in","r", stdin);	
	freopen("paint.out", "w", stdout);
	std::vector<bool> cover(100);
	int a, b, c, d; cin >> a >> b >> c >> d;
	//for loops modify values in vector from ranges a to b and c to d. Overlaps will automatically be found. 
	for (int i = a; i < b; ++i) cover[i] = 1;
	for (int i = c; i < d; ++i) cover[i] = 1;
	int ans = 0;
	for (int i = 0; i < 100; ++i) ans += cover[i];
	std::cout << ans;
}
