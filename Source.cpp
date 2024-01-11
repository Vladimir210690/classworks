#include <iostream>
#include <string>
using namespace std;

class human {
public:
	int age = 0;
	int weight = 0;
	string name;

};


class people : public human {
public:
	int age = 0;

};



int main() {
	people first;
	first.weight = 10;
	cin >> first.name;
	cout << first.weight << "\t" << first.name;


	return 0;
}