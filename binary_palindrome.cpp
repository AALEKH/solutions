#include <iostream>

bool isPalindrome(unsigned number) {
	unsigned rev_ = 0;
	unsigned inter = number;
	while(inter) {
		rev_ = (rev_<< 1) | (inter & 1);
		inter = inter >> 1;
	}
	return rev_ == number;
}

int main() {
	if(isPalindrome(9))
		std::cout << "Is a palindrome" << std::endl;
	else
		std::cout << "Is not a palindrome" << std::endl;
	return 0;
}