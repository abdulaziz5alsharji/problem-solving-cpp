#include<iostream>
#include<string>
#include <stdio.h>

using namespace std;

bool check(char arr[4][4]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (arr[i][j] == arr[i][j + 1] && arr[i][j] == arr[i + 1][j] && arr[i + 1][j] == arr[i + 1][j + 1]) {
				return true;
			}
		}
	}
	return false;
}
int main(int argc, char* argv[]) {
	const int size = 4;
	char arr[size][size];
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cin >> arr[i][j];
		}
	}
	if (check(arr)) {
		cout << "YES" << endl;
		return 0;
	}
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			char c = arr[i][j];
			if (c == '#') arr[i][j] = '.';
			else arr[i][j] = '#';
			if (check(arr)) {
				cout << "YES" << endl;
				return 0;
			}
			arr[i][j] = c;
		}
	}
	cout << "NO" << endl;

	return 0;
}