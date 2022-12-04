#include<bits/stdc++.h>

using namespace std;

int a[100], n;
void QuayLuiNhiPhan(int m)
{
	if(m > n)
	{
		for(int i = 1; i <= n; i++)
			cout << a[i];
		cout << endl;
		return;
	}
	for(int i = 0; i <= 1; i++)
	{
		a[m] = i;
		QuayLuiNhiPhan(m + 1);
	}
	
}

void LietKeNhiPhan(int a[], int n)
{
	QuayLuiNhiPhan(1);
}


int main()
{
	cin >> n ;
	LietKeNhiPhan(a, n);
}
