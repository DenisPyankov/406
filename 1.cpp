#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	float a, b, c;
	for (a = 0; a <= 100; a++)
		for (b = 0; b <= 100; b++)
			for (c = 0; c <= 100; c++)
				if (10 * a + 5 * b + 0.5 * c == 100 && a + c + b == 100)
					cout << a << " " << b << " " << c << endl;
}
