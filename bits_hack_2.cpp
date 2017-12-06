#include <iostream>
#include <bitset>

int turnOffKthBit(int number, int bit_) {
	return number & ~(1 << (bit_ -1));
}

void show_bitset(int number) {
	std::cout << std::bitset<8>(number) << std::endl;
}

int turnOnKthBit(int number, int bit_) {
	return number|(1<<(bit_-1));
}

int checkIfKthBitIsSet(int number, int bit_) {
	return number & (1 << (bit_-1));
}

int toggleKthBit(int number, int bit_) {
	return number^(1<<(bit_-1));
}

int main() {
	return 0;
}