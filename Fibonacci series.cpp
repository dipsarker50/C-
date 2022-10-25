#include<iostream>
using namespace std;

int main()
{
    int n, s1 = 0, s2 = 1, sum = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	   {
		if (i == 1)
			cout << s1 << " ";
		else if (i == 2)
			cout << s2 << " ";
		else
         {
			sum = s1 + s2;
			cout << sum << " ";
			s1 = s2;
			s2 = sum;
         }
	}
	return 0;
}
