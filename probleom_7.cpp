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
#include <assert.h>
#include <bitset>
#include <conio.h>
#include <omp.h>
#include <algorithm>
#include <set>
using namespace std;

int sizeOfStringAfterRemoveDuplicatedChar(string text) {
	set<char> letters;
	for (int index = 0; index < text.length(); index++) {
		letters.insert(text[index]);
	}
	return letters.size();
}
int main(int argc, char** argv) {
	string name;
	cin >> name;
	int numberOfChar = sizeOfStringAfterRemoveDuplicatedChar(name);
	string result = numberOfChar % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!";
	cout << result << endl;
	return 0;
}