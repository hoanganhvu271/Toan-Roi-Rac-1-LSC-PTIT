#include<bits/stdc++.h>

using namespace std;

int a[100], n, k;
void QuayLuiToHop(int m)
{
	if(m > k)
	{
		for(int i = 1; i <= k; i++)
			cout << a[i] << " ";
		cout << endl;
		return;
	}
	for(int i = a[m-1] + 1; i <= n-k+m; i++)
	{
		a[m] = i;
		QuayLuiToHop(m + 1);
	}
	
}

void LietKeToHop(int a[], int n)
{
	QuayLuiToHop(1);
}


int main()
{
	cin >> n >> k;
	LietKeToHop(a, n);
}
