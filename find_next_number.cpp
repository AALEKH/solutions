// Experincing Segmentation Fault

#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

void swap(char *a, char *b) {
	char temp = *a;
	*a = *b;
	*b = temp;
}

void findNextNumber(string str, int number) {
	int i, j;
	for(i = number-1; i > 0; i--){
		if(str[i] > str[i-1]){
			break;
		}
	}

	if(i == 0) {
		cout << "Not Found, all numbers in decreasing order" << endl;
		return;
	}

	char inter = str[i-1];
	int small = i;
	for(j = i+1; j < number; j++) {
		if(str[j] > inter && str[j] < str[small]){
			small = j;
		}
	}

	swap(&str[small], &str[i-1]);

	sort(str.begin() + i, str.end()); 

	cout << "The next smallest number is: " << str << endl;
	return;
}

int main() {
	string item = "534976";
	findNextNumber(item, sizeof(item));
	return 0;
}