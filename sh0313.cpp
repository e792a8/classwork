#include <iostream>
using namespace std;

int main()
{
	int i, j;
	cin >> i;
	switch ((i - 1) / 100000)
	{
	case 0:
		j = i + i / 10;
		break;
	case 1:
		j = i + 10000 + (i - 100000) * 75 / 1000;
		break;
	case 2:
	case 3:
		j = i + 17500 + (i - 200000) / 20;
		break;
	case 4:
	case 5:
		j = i + 27500 + (i - 400000) * 3 / 100;
		break;
	case 6:
	case 7:
	case 8:
	case 9:
		j = i + 39500 + (i - 600000) * 15 / 1000;
		break;
	default:
		j = i + 45500 + (i - 1000000) * 15 / 1000;
	}
	cout << j << endl;
}
