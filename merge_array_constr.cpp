// Merge two array at given position

#include <vector>
#include <iostream>

void merge(std::vector<int> first, std::vector<int> second) {
	int i = first.size(), j = second.size();
	while(j>0)
		first[i+j-1] = ((i == 0) || (second[j-1] > first[i-1]))? second[--j]:first[--i];
	// int i=0, j=0, k, first_size = first.size(), second_size = second.size();

	// while(i < first_size || j < second_size){
	// 	if(first[i] == 0){
	// 		first[i] = second[j];
	// 		i++;
	// 		j++;
	// 	} else {
	// 		i++;
	// 	}
	// }

	// merge_sort(first)
	for(int k = 0; k < first.size(); k++)
		std::cout << first[k] << std::endl;
}

int main() {
	std::vector<int> X = {2, 9, 10};
	std::vector<int> Y = {1, 8};
	merge(X, Y);
	return 0;
}