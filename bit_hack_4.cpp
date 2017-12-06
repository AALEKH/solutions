#include <iostream>
#include <string>

char toLowerCase(char ch) {
	return (ch | ' ');
}

char toUpperCase(char ch) {
	return (ch & '_');
}

char convertAlphabetCase(char ch) {
	return (ch ^ ' ');
}

int letterPosition(char ch) {
	return (ch & 31);
}

int main() {
	return 0;
}