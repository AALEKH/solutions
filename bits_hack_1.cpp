#include <iostream>

void check_odd_even(int number) {
	if(number & 1){
		std::cout << "The number is ODD" << std::endl;
	} else{
		std::cout << "The number is EVEN" << std::endl;		
	}
}

void check_opposite_sign(int first, int second) {
	if((first^second)<0){
		std::cout << "Have Opposite Sign" << std::endl;
	} else {
		std::cout << "Have Same Sign" << std::endl;
	}
}

void add_number(int number) {
	std::cout << "Added number is: " << -~number << std::endl;
}

void swap (int &x, int &y) {
	
	if(x!=y){
	
		x = x^y;
		y = x^y;
		x = x^y;
	
	}

}

int main(){
	int x = 1, y = 2;
	check_odd_even(5);
	check_odd_even(2);
	check_opposite_sign(-1, 2);
	add_number(0);
	swap (x, y);
	std::cout << "Swapped elements are: " << x << " and: " << y;
	return 0;
}