#include <iostream>

using namespace std;
int main(int argc, char* argv[]) {
	int a, b, years = 0;
	cin >> a >> b;
	while (a <= b)
	{
		a *= 3;
		b *= 2;
		years++;
	}
	cout << years << endl;
	return 0;
}