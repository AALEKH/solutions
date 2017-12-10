#include <iostream>
#include <vector>

using namespace std;

void max_min_array(vector<int> elements) {
	int max_ = -1000, min_ = 1000;
	for(int i = 0; i < elements.size(); i++){
		if(max_ < elements[i])
			max_ = elements[i];
		if(min_ > elements[i])
			min_ = elements[i];
	}

	cout << "Maximum Value is: " << max_ << " and Minimum value is: " << min_;
}

int main() {
	vector<int> items = {-10, 5, 100, 2, 20, 80};
	max_min_array(items);
	return 0;
}