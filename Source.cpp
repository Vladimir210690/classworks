#include <iostream>
#include <string>

using namespace std;

int main() {
	const char str[] = "Hello World";
	cout << strlen(str) << "\t";
	const char* str2 = "Goodbuy";
	cout << strlen(str2) << "\t";

	string str3 = "motion";
	cout << str3.length() << "\t";

	char str4[100];
	str4[0] = 'H';
	str4[1] = '\0';
	cout << str4 << "\t";

	const char* str5 = "template";
	const char* str6 = "template";

	cout << strcmp(str5, str6);

	return 0;
}