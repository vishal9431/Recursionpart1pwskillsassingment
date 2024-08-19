// Given a positive integer, return true i" it is a power o"  using recursion<
#include<iostream>
using namespace std;
bool poweroftwo(int n)
{
       if(n==1)return true;
       else if(n==0||n%2!=0)return false;
       poweroftwo(n/2);
}
int main()
{
    int n;
    cin>>n;
    bool ans =poweroftwo(n);
    if(ans == true)cout<<"True it is power of 2"<<endl;
    else cout<<" not in power of 2"<<endl;
}