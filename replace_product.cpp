// Replace element with product of numbers after the element
// O(n^2)

#include <vector>
#include <iostream>

void replace_product_after(std::vector<int> array) {
	int product = 1;
	for(int i = 0; i < array.size(); i++) {
		product = 1;
		for(int j = array.size()-1; j > i; j--){
			product = array[j]*product;
		}
		array[i] = product;
	}

	for(int k = 0; k < array.size(); k++)
		std::cout << array[k] << std::endl;
}

int main() {
	std::vector<int> items = {1, 2, 3, 4, 5};
	replace_product_after(items);
	return 0;
}