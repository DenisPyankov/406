#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;


struct p
{
    int x;
    int y;
};

int main()
{
	ifstream in("in.txt");
	ofstream out("out.txt");
    int mx, my, n;
    double rd;
    in >> mx >> my >> rd >> n;
    vector <p> v;
    for (int i = 0; i < n; ++i)
    {
        int x, y;
        in >> x >> y;
        x -= mx;
        y -= my;
        if (sqrt(x * x + y * y) <= rd)
            v.push_back(p{x, y});
    }

    int res = 0;
    for (p p1 : v)
    {
        int x = 0;
        int l = 0;
        int r = 0;
        for (p p2 : v)
        {
            int cp = p1.x * p2.y - p2.x * p1.y;
            if (cp < 0)
                l++;
            else if (cp > 0)
                r++;
            else
                x++;
        }
        res = max({ res, x + l, x + r});
    }
    out << res;
}
