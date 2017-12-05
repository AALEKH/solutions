// Implement's Fisher Yates Shuffle over an array
// Complexity: O(n)

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdlib.h>     /* srand, rand */

void fischerYates(std::vector<int> fY) {
	int j;
	for(int i = fY.size()-1; i >= 0; i--) {
		j = rand()%(i+1);
		std::swap(fY[i], fY[j]);
	}
	for(int i =0; i < fY.size(); i++)
		std::cout << fY[i] << std::endl;
}

int main() {
	std::vector<int> ele = {1, 2, 3, 4, 5};
	fischerYates(ele);
	return 0;
}