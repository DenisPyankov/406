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

//9) Имеется 100 рублей. 
//Сколько быков, коров и телят можно купить на все эти деньги, 
//если плата за быка – 10 рублей, 
//за корову – 5 рублей, 
//за теленка – полтинник (0,5 рубля) 
//и надо купить 100 голов скота?
