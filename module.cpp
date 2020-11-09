#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int a;
	vector<int> numbers;
	while (true) {
		cin >> a;
		numbers.push_back(a);
		if (a > 100) { break; }
	}
	for (int x : numbers) {
		int min1 = *min_element(numbers.begin(), numbers.end());
		// numbers.pop_back(min);
		//int min2 = *min_element(numbers.begin(), numbers.end());
		// numbers.pop_back(min);
		if (x!= min1)cout << x << " ";
		
	}cout << endl;
	return 0;
}