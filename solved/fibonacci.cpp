// Problem No.4730
// Basic Fibonacci sequence

#include <bits/stdc++.h>

using namespace std;

int sequence[45];
int entries;

int fibonacci(int index)
{
	if(sequence[index] == 0)
	{
		fibonacci(index-1);
		sequence[index] = sequence[index-1] + sequence[index-2];
	}
	return sequence[index];
}

int main(){
	sequence[0] = 1;
	sequence[1] = 1;
	for(int i=2;i<45;i++)
		sequence[i] = 0;

	while(cin >> entries)
		cout << fibonacci(entries) << '\n';
	return 0;
}
