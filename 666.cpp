#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	  ifstream in("in.txt");
	  ofstream out("out.txt");
    int N;
    in >> N;
    for (int i = 26; i >= 1; i--)
        if (N != 1) {
            if (N <= pow(2, i - 1))
                N--;
            else
                N -= pow(2, i - 1);
        }
        else {
            out << char('a' + i - 1);
            return 0;
        }
}
