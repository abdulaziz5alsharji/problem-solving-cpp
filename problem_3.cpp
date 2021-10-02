#include<iostream>
#include<string>
#include <stdio.h>
#include <cmath>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <tuple>
#include <map>
#include <vector>
#include <stack>
using namespace std;


int main(int argc, char* argv[]) {
	int arr[5][5];
	int row, column;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> arr[i][j];
			if (arr[i][j] == 1) {
				row = i;
				column = j;
			}
		}
	}
	int result = abs((row - 2)) + abs((column - 2));
	cout << result << endl;
	return 0;
}