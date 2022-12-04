#include<bits/stdc++.h>

using namespace std;

void SinhNhiPhan(int a[], int n)
{
	for(int i = 1; i <= n; i++)
		a[i] = 0;
	while(1)
	{
		for(int i = 1; i <= n; i++)
			cout << a[i];
		cout << endl;
		
		int i = n;
		while(i > 0 && a[i] == 1)
		{
			a[i] = 0;
			i--;
		}
		
		if(i == 0)
			return;
		else a[i] = 1;
	}
}

int main()
{
	int n;
	cin >> n;
	int a[n];
	SinhNhiPhan(a, n);
}
