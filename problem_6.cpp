#include<iostream>
#include<string>

using namespace std;


int main(int argc, char* argv[]) {
	int n, counter = 0;
	cin >> n;
	char* colors = new char[n];
	for (int i = 0; i < n; i++) {
		cin >> colors[i];
	}

	for (int j = 0; j < n - 1; j++) {
		if (colors[j] == colors[j + 1])
			counter++;
	}
	cout << counter << endl;
	return 0;
}