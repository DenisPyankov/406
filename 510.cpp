
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
    vector <int> v(1 + N,1);
    for (int i = 2; i <= N; i += 2)
    {
        v[i] = v[i - 2] * 3;
        for (int j = i - 4; j >= 0; j -= 2)
            v[i] += v[j] * 2;
    }
    out << v[N];
}
