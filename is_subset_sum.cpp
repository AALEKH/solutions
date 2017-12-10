#include <iostream>
#include <vector>

using namespace std;

bool isSubsetSum(vector<int> elements, int n, int sum) {
	if(sum ==0)
		return true;
	if(sum != 0 && n == 0)
		return false;

	if(elements[n-1] > sum) // Since there are no negative number's so we can avoid this
		return isSubsetSum(elements, n-1, sum);

	return isSubsetSum(elements, n-1, sum-elements[n-1]) || isSubsetSum(elements, n-1, sum);
}

int main() {
	vector<int> elements = {3, 34, 4, 12, 5, 2};
	int sum = 9;
	if(isSubsetSum(elements, elements.size(), sum))
		cout << "Yes there exist subset sum";
	else
		cout << "It does not";
	return 0;
}
