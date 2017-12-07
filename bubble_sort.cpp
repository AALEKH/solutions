#include <iostream>
#include <vector>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(std::vector<int> items) {
	int i, j;
	for(i = 0; i < items.size()-1; i++ ) {
		for(j = 0; j < items.size()-i-1; j++) {
			if(items[j] >items[j+1] ){
				swap(&items[j], &items[j+1]);
			}
		}
	}

	std::cout << "Display Elements" <<std::endl;
	for(int k =0; k < items.size()-1; k++)
		std::cout << items[k] << std::endl;
}

int main() {
	std::vector<int> elements = {64, 34, 25, 12, 22, 11, 90};
	bubbleSort(elements);
	return 0;
}