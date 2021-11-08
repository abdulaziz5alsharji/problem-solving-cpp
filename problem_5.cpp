#include <iostream>
#include <string>
#include <set>
using namespace std;


int main(int argc, char* argv[]) {
	set<int> numbers;
	int s[4];
	int result = 0;
	for (int i = 0; i < 4; i++)
		cin >> s[i];
	for (int i = 0; i < 4; i++) {
		numbers.insert(s[i]);
	}
	cout << 4 - numbers.size() << endl;
	return 0;
}