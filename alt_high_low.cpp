// Print alternate low and high elements  of an array
// O(n)

#include <vector>
#include <iostream>

void alt_hl(std::vector<int> items) {
	int i = 0, j = items.size()-1;
	std::vector<int> new_arr;
	while(i<=j){
		new_arr.push_back(items[i]);
		new_arr.push_back(items[j]);
		i++;
		j--;
	}
	for(int k = 0; k < new_arr.size(); k++)
		std::cout << new_arr[k] << std::endl; 
}

int main() {
	std::vector<int> elements = {1, 2, 3, 4, 5, 6 };
	alt_hl(elements);
	return 0;
}