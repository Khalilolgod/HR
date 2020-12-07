#include <bits/stdc++.h>

using namespace std;


int gimme(int a)
{
    int cnt = 0;
    int max = 0;
    int flag = 1;
    int n = a;
    vector<char> bin;
    while(n>0)
    {
        if(n % 2 == flag)
        {
            ++cnt;
            if(cnt > max)
                max = cnt;
        }
        else
        {
            cnt = 0;
        }
        n/=2;
    }
    return max;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout<<gimme(n)<<endl;

    return 0;
}
