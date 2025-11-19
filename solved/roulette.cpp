//Problem No.528

#include <bits/stdc++.h>

using namespace std;

float countShoot(string magazine)
{
    int len = magazine.length(), cnt = 0, cntZero = 0;
    float res, cnt_f, cntZero_f;
    for (int i = 0; i<len; i++)
    {
        if (magazine[i] == '0')
        {
            cntZero++;
            if (magazine[(i+1)%len] == '0')
                cnt++;
        }
    }
    cnt_f = float(cnt);
    cntZero_f = float(cntZero);
    res = cnt_f /cntZero_f;
    return res;
}

float countRot(string magazine)
{
    int len = magazine.length(), cnt = 0;
    float res;

    for (int i = 0; i<len; i++)
    {
        if (magazine[i] == '0')
            cnt++;
    }
    
    res = 1.0*cnt / len; 
    return res;
}


int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    
    float shoot, rotate;
    string magazine;
    
    cin >> magazine;
    shoot = countShoot(magazine);
    rotate = countRot(magazine);

    //cout << shoot << ' ' << rotate <<'\n';

    if (shoot > rotate)
        cout << "SHOOT\n";
    else if (rotate > shoot)
        cout << "ROTATE\n";
    else 
        cout << "EQUAL\n";

    return 0;
    
}

