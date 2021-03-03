#include <iostream>
#include <vector>
int main(void) {
	freopen("paint.in","r", stdin);	
	freopen("paint.out", "w", stdout);
	std::vector<bool> cover(100);
	int a, b, c, d; std::cin >> a >> b >> c >> d;
	//for loops change values to 1 in vector from ranges a to b and c to d. Overlaps will automatically be found. 
	for (int i = a; i < b; ++i) cover[i] = 1;
	for (int i = c; i < d; ++i) cover[i] = 1;
	int ans = 0;
	//This final for loop adds all of the modified values together into the sum. unmodified ones will be 0, and won't affect the sum. 
	for (int i = 0; i < 100; ++i) ans += cover[i];
	std::cout << ans;
}
