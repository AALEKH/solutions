#include <iostream>
#include <vector>
#include <algorithm>

bool myfunction (int i,int j) { return (i<j); }

void maxProduct(std::vector<int> items) {
	std::sort(items.begin(), items.end(), myfunction); 
	if(items[items.size()-1]*items[items.size()-2] > items[0]*items[1]) {
		std::cout << "The item are at index: " << items.size()-2 << " - " << items.size()-1;
	} else {
		std::cout << "The item are at index: " << "0 - 1";
	}
}

int main() {
	std::vector<int> items = {-10, -3, 9, 6, 2};
	maxProduct(items);
}