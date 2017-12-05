// Merge Two sorted array (Inplace)
// Receiving Abort Trap error in this code
// Complexity: O(m*n)


#include <vector>
#include <iostream>

void inplace_sort(std::vector<int> first_, std::vector<int> second_) {
	int inter_;
	for(int i =first_.size()-1; i >= 0; i--) {
		int j, last = first_[first_.size()-1];
		for(int j = second_.size()-2; j >= 0 && first_[j] > second_[i] ; j--) {
			first_[j+1] = first_[j];
		}

		if(j!=second_.size()-2 || last > second_[i]){
			first_[j+1] = second_[i];
			second_[i] = last;
		}
	}

	std::cout << "First Array: ";
	for(int l = 0; l < first_.size(); l++)
		std::cout << first_[l];

	std::cout << "\nSecond Array: ";
	for(int k = 0; k < second_.size(); k++)
		std::cout << second_[k];
}

int main() {
	std::vector<int> first = {1, 5, 9, 10, 15, 20};
	std::vector<int> second = {2, 3, 8, 13};
	inplace_sort(first, second);
	return 0;
}