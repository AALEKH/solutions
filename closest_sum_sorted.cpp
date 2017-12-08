#include <iostream>
#include <vector>

int abs(int a){
	return (a<0)?(-1)*a:a;
}

void closestSum(std::vector<int> array, int key) {
	int res_l_, res_r_;
	int low = 0, high = array.size()-1, diff = 10000;
	while(high > low) { // Equality can't be made here, else it will consider mid element twice
		if(abs(array[low] + array[high] - key) < diff){
			res_l_ = low;
			res_r_ = high;
			diff = abs(array[low] + array[high] - key);
		} // Not else since, it won't update then for each check we need to update high or low
		if((array[low] + array[high]) > key) {
			high--;
		} else {
			low++;
		}
	}
	std::cout << "The index of closest difference is: " << res_l_ << " - " << res_r_ << std::endl;
}

int main() {
	std::vector<int> elements = {10, 22, 28, 29, 30, 40};
	int x = 54;
	closestSum(elements, x);
	return 0;
}