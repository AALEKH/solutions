#include <iostream>
#include <bitset>

int brian_kernighan(int from, int to) {
	int diff = from^to;
	int count = 0;
	for(;diff;count++)
		diff = diff & (diff-1);
	return count;
}

int main() {
	int x = 8;
	int y = 10;
	std::cout << brian_kernighan(x, y) << std::endl;
}