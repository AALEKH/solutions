#include <iostream>
#include <map>
#include <vector>

void max_length(std::vector<int> elements, int sum) {
	std::map<int, int> mapped;
	int curr_sum = 0;
	for(int i = 0; i  < elements.size(); i++) {
		curr_sum = curr_sum + elements[i];
		if(curr_sum == sum) {
			std::cout << "Sum found between" << 0 << " - " << i + 1 << std::endl;
		}

		if(mapped.find(curr_sum-sum) != mapped.end()) {
			std::cout << "Sum found between" << elements[curr_sum-sum] << " to " << i+1 << std::endl;
		}
		mapped[curr_sum] = i;
	}
}

int main() {
	std::vector<int> items = {10, 2, -2, -20, 5};
	int sum = -15;
	max_length(items, sum);
	return 0;
}