//sinh to hop
#include<bits/stdc++.h>

using namespace std;

void SinhToHop(int a[], int n, int k)
{
	for(int i = 1 ; i <= k; i++)
		a[i] = i;
		
	while(1)
	{
		for(int i = 1 ; i <= k ; i++)
			cout << a[i] << " ";
		cout << endl;
		
		int i = k;
		
		while(i > 0 && a[i] >= n-k+i)
			i--;
		
		if(i == 0)
			return;
		
		a[i] = a[i] + 1;
		for(int j = i+1; j <= k; j++)
			a[j] = a[i] + j - i;
	}
}

int main()
{
	int n, k;
	int a[n];
	cin >> n >> k;
	SinhToHop(a, n, k);
}
