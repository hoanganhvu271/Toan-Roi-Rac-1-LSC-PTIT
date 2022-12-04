#include<bits/stdc++.h>

using namespace std;

int vs[100], a[100], n;
void QuayLuiHvi(int m)
{
	if(m > n)
	{
		for(int i = 1; i <= n; i++)
			cout << a[i] << " ";
		cout << endl;
		return;
	}
	for(int i = 1; i <= n; i++)
	{
		if(vs[i] == 0)
		{
			a[m] = i;
			vs[i] = 1;
			QuayLuiHvi(m+1);
			vs[i] = 0;
		}
	}
}

void LietKeHvi(int a[], int n)
{
	for(int i = 1; i <= n; i++)
		vs[i] = 0;
	QuayLuiHvi(1);
}


int main()
{
	cin >> n;
	LietKeHvi(a, n);
}
