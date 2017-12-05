#include <vector>
#include <iostream>

void majority_elem(std::vector<int> elem) {
	int m;
	int i = 0;
	for(int j = 0;j < elem.size(); j++){
		if(i==0){
			m = elem[j];
		} else {
			(m==elem[j])? i++ : i--;
		}

	}
	std::cout << "Majority Element is: " << m;
}

int main() {
	std::vector<int> items = {1, 8, 7, 4, 1, 2, 2, 2, 2, 2, 2, 2, 2};
	majority_elem(items);
	return 0;
}