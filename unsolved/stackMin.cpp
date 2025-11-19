// Problem No.693

#include <bits/stdc++.h>
using namespace std;

long int calc_sum_min(int n, int a, int b, int c, int x_0)
{
    stack <int> x, x_mins;

    x_mins.push(0);
    int x_i = x_0, res = 0;

    for (int i = 0; i<n; i++)
    {
        if (x_i%5 >= 2)
        { 
            x.push(x_i);
            if (x_i < x_mins.top())
            {
                if (x.empty())
                    x_mins.pop();
                x_mins.push(x_i);
            }
        }
        else if (x.empty() == 0)
        {
            if (x.top() == x_mins.top())
            {
                x_mins.pop();
                if (x_mins.empty())
                    x_mins.push(0);
            }
            x.pop();
        }
        x_i = (a*x_i*x_i + b*x_i + c)/100%1000000;
        res += x_mins.top();
    }
    return res;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

    long int n, a, b, c, x_0; 
    cin >> n >> a >> b >> c >> x_0;

    int sum_of_mins = calc_sum_min(n, a, b, c, x_0);
    cout << sum_of_mins << '\n';
    return 0;
}

