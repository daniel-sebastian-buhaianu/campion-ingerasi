#include <fstream>
using namespace std;
int cmmdc(int, int);
int main()
{
	ifstream f("ingerasi.in");
	int n, x, dc;
	f >> n >> x;
	dc = x;
	while (n > 1)
	{
		f >> x;
		dc = cmmdc(dc, x);
		n--;
	}
	f.close();
	ofstream g("ingerasi.out");
	g << dc;
	g.close();
	return 0;
}
int cmmdc(int a, int b)
{
	while (b)
	{
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}
