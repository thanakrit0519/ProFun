#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[100][100] = {};
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i+1; j++)
		{
			a[i][j] = 1;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] == 1) cout << "*";
			else cout << " ";
		}
		cout << endl;
	}
}