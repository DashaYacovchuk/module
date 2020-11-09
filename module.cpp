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
	auto m = std::min_element(numbers.begin(), numbers.end());
	numbers.erase(m);
	auto m1 = std::min_element(numbers.begin(), numbers.end());
	numbers.erase(m1);
	for (int x : numbers) {
		cout << x << " ";
		
	}cout << endl;
	return 0;
}