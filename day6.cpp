#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<char> ans;
    while(n > 0)
    {
        string s;
        string even="";
        string odd = "";
        cin >> s;
        int len = s.length();
        for(int i = 0 ; i<len ; i++)
        {
            if(i % 2 == 0)
            {
                even+=s[i];
            }
            else
            {
                odd+=s[i];
            }
        }
        for (char &a : even )
        {
            ans.push_back(a);
        }
        ans.push_back(' ');
        for (char &b : odd )
        {
            ans.push_back(b);
        }

        ans.push_back('\n');
        --n;
    }
    auto end = ans.end();
    for (auto i = ans.begin() ; i < end ; i++ )
    {
        cout<<*i;
    }
    return 0;
}