#include <map>
#include <iostream>
#include<vector>
using namespace std;
int main() {

    int n ;
    cin>>n;
    int number;
    string name;
    map<string,int> phonebook;
    vector<string> vec;
    for (int i = 0 ; i < n; i++)
    {
        cin>> name >> number ;
        phonebook.insert(pair<string,int>(name,number));
    }  
    for (int i = 0 ; i < n; i++)
    {
        cin>> name ;
        vec.push_back(name);      
    }
    for (int i = 0 ; i < n; i++)
    {
        name = vec[i];
        if(phonebook.find(name) != phonebook.end())
        {
            cout<<name<<"="<<phonebook[name]<<endl;
            continue;
        }
        cout<<"Not found"<<endl;        
    }
    return 0;
}
