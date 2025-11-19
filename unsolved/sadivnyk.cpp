// Problem No.17

#include <bits/stdc++.h>
using namespace std;

long int paint_n_trees(int n, long int for_n[])
{
	if (for_n[n-1] == 0)
	{
		paint_n_trees(n-1, for_n);
		cout<<for_n[n-1]<<'\n';
		for_n[n-1] = (for_n[n-2])*2;

	}
	return for_n[n-1];
}

short int n;
long int for_n[50];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

// All zero to remove mess values & a start value
	for (int i = 1; i<n; i++)
		for_n[i] = 0;
	for_n[0] = 3;
// Results 
	cin >> n;
	for (int i=0;i<n;i++)
		cout<<for_n[i]<< '\n';
	cout << paint_n_trees(n, for_n) << '\n';

	return 0;
	
	
}
