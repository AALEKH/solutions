// Dutch National Flag sorting
//Experiencing seg fault ?? 


#include <vector>
#include <iostream>
// #include <algorithm>

void swap(int &ele_1_, int &ele_2_) {
	int inter_ = ele_2_;
	ele_2_ = ele_1_;
	ele_1_ = inter_;
}

void dutchNationalFlag(std::vector<int> elements) {
	int start =0, mid = 0, pivot = 1, end = elements.size(), inter_ = 0;
	while(mid <= end){
		if(elements[mid] < pivot) {
			// swap(elements[start], elements[mid]);
			inter_ = elements[start];
			elements[start] = elements[mid];
			elements[mid] = inter_;
			++start;
			++mid;
		} else if(elements[mid] > pivot) {
			inter_ = elements[end];
			elements[end] = elements[mid];
			elements[mid] = inter_;
			// swap(elements[mid], elements[end]);
			--end;
		} else {
			++mid;
		}
	}

	// Result display loop:
	for(int i =0; i < elements.size(); i++)
		std::cout << elements[i] << ", ";
}

int main() {
	std::vector<int> dutchFlag = {0, 1, 2, 2, 1, 0, 0, 2, 0, 1, 1, 0};
	dutchNationalFlag(dutchFlag);
	return 0;
}