// Equilibrium Index of Array
// Experiencing Segmentation Fault

#include <iostream>
#include <vector>

void equil_sum(std::vector<int> elements) {
	std::vector<int> left;
	left[0] = 0;
	for(int i = 1; i < elements.size(); i++){
		left[i] = left[i-1] + elements[i-1];
	}

	int right = 0;
	for(int j = elements.size()-1; j >= 0; j--){

		if(right == left[j]){
			std::cout << "The Index of Equilibrium sum is: " << j;
		}
		right = right + elements[j];
	}
}

int main() {
	std::vector<int> items = {0, -3, 5, -4, -2, 3, 1, 0};
	equil_sum(items);
	return 0;
}