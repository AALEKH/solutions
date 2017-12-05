#include <iostream>
#include <map>
#include <vector>

// int mod(int ele) {
	// return (ele < 0) ? -1*ele:ele;
// }

void check_two_sum(std::vector<int> elements, int sum) {
	std::map<int, int> mapped;

	for(int i = 0; i < elements.size(); i++) {
		if(mapped.find(sum-elements[i]) != mapped.end()) {
			std::cout << "Element found are: " << elements[i] << " and " << sum-elements[i] << std::endl;
			return ;
		}
		mapped[elements[i]] = i;
	}
	std::cout << "Elements not found in the run" << std::endl;
	return;
}

int main() {
	std::vector<int> element = {1, 3, 4, 5, 7, 8, 0};
	check_two_sum(element, 15);
	return 0;
}