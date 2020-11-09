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
	int min = *min_element(numbers.begin(), numbers.end());
	for (int x : numbers)
		if (x != min)
			cout << x << " ";
	cout << endl;
	return 0;
}