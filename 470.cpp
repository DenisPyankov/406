#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	  ifstream in("in.txt");
	  ofstream out("out.txt");
    int H, W, N;
    in >> H >> W >> N;
    vector<vector<int>> v(H+1, vector<int>(W+1, 0));
    vector<vector<int>> m(H+1, vector<int>(W+1, 0));
    for (int i = 1; i <= H; i++)
        for (int j = 1; j <= W; j++) {
            in >> v[i][j];
            m[i][j] = m[i - 1][j] + m[i][j - 1] + v[i][j] - m[i - 1][j - 1];
        }
    
    for (int i = 1; i <= N; i++)
    {
        int q, w, e, r;
        in >> q >> w >> e >> r;
        if (q > e)
            swap(q, e);
        if (w > r)
            swap(w, r);
        out << m[e][r] + m[q - 1][w - 1] - m[q - 1][r] - m[e][w - 1];
    }
}
