//Longest Continous Zero Sum Subarray

// Complexity: O(n) space: O(n)

#include <map>
#include <vector>
#include <iostream>

int abs(int ele){
	return (ele < 0) ? (-1)*ele:ele;
}

void max(std::map<int, int> first, std::map<int, int> second) {
	int abs_;
	if(abs(second[1]-first[0]) > abs(second[0]-first[1])) {
		abs_ = abs(second[1]-first[0]);
		std::cout << "Maximum length is: " << abs_  << "with index: " << first[0] << " - " << second[1] << std::endl;
	} else {
		abs_ = abs(second[0]-first[1]);
		std::cout << "Maximum length is: " << abs_ << "with index: " << first[1] << " - " << second[0] << std::endl;		
	}
}

void maxLen(std::vector<int> elements) {
	std::vector<int> items;
	std::map<int, int> mapped_first, mapped_second;
	int zeros = 0, ones = 0, max_len_, diff_, interm_;
	for(int i = 0; i < elements.size(); i++) {
		if(elements[i] == 0){
			zeros++;
		} else if(elements[i] == 1) {
			ones++;
		}
		interm_ = ones-zeros;
		items.push_back(interm_);
	}

	for(int j = 0; j < items.size(); j++) {
		if(mapped_first.find(items[j]) == mapped_first.end()) {
			mapped_first[items[j]] = j;
		}
		mapped_second[items[j]] = j;
	}
	max(mapped_first, mapped_second);
}

int main(){
	std::vector<int> it_ = {1, 0, 1, 0, 0, 0, 0};
	maxLen(it_);
	return 0;
}