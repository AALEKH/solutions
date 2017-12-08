#include <iostream>
#include <vector>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void insertionSort(std::vector<int> items) {

	for(int i = 1; i < items.size()-1; i++) {

		for(int j = 0; j <= i; j++) {

			if(items[i] < items[j]) {

				swap(&items[i], &items[j]);

			}

		}

	}

	std::cout << "Insertion sorted array is: " << std::endl;
	for(int k = 0; k < items.size()-1; k++){
		std::cout << items[k] << " ";
	}

}

int main() {
	std::vector<int> elements = {64, 34, 25, 12, 22, 11, 90};
	insertionSort(elements);
	return 0;
}