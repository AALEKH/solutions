#include <iostream>
#include <bitset>

int abs(int number) {
	int mask = number >> (sizeof(int)*8-1);
	return ((number+mask)^mask);
}

int main() {
	std::cout << abs(-5) <<std::endl;
	return 0;
}