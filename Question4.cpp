// !< There are n stairs, and a person standing at the bottom wants to climb the stairs to
// reach the nth stair= The person can climb either 1, , or  stairs at a time= Write a
// program to count the number o" ways the person can reach the top using recursion
#include<iostream>
using namespace std;
int countnoways(int n)
{
    if(n==0)return 1;
    if(n<0)return 0;
    return countnoways(n-1)+countnoways(n-2)+countnoways(n-3);
}
int main()
{
    int n;
    cin>>n;
    int ans = countnoways(n);
    cout<<ans<<endl;
}