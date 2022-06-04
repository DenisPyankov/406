#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	  ifstream in("in.txt");
	  ofstream out("out.txt");
    int N;
    in >> N;
    int x = 0;
    vector<int> v;
    for (int i = 0; i < N; i++) {
        int a;
        in >> a;
        v.push_back(a);
        x += a;
    }
    sort(v.begin(), v.end());
    int m = v[N - 1];
    int mn = min(x / 2, x - m);
    out << mn;
}
