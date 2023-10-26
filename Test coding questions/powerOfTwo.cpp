#include<iostream>
using namespace std;


bool check(string s)
{
    int cnt=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1'){
            cnt++;
        }

    }
    if(cnt==1)
    return true;

    else
    return false;

}
int main()
{
    string s;
    cout<<"Enter a string:"<<endl;
    getline(cin, s);

    if(check(s))
    {
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }

    return 0;
}