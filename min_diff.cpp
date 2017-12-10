#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void minimumDiff(vector<int> elements) {
	int min_diff = 1000;
	sort(elements.begin(), elements.end());
	for(int  i = 1; i < elements.size()-1; i++){
		if((elements[i] - elements[i-1]) < min_diff)
			min_diff = elements[i] - elements[i-1];
	}
	cout << "The minimum difference is: " <<  min_diff << endl;
}

int main() {
	vector<int> elements = {64,57,2,78,43,73,53,86};
	minimumDiff(elements);
	return 0;
}