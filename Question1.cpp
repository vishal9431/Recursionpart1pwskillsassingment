// 6< Print an increasing-decreasing sequence using recursion
// Example:
// I" n = 5, the output should be:
// 123454321
#include<iostream>
using namespace std;
void printasc(int n)
{
    if(n==0)return;
    printasc(n-1);
    cout<<n<<" ";
}
void printdsc(int n)
{
    if(n==0)return ;
    cout<<n<<" ";
    printdsc(n-1);
}
void printno(int n)
{
    printasc(n);
    printdsc(n-1);
}
int main()
{
    int n;
    cout<<" enter no to print ascending to descening "<<" ";
    cin>>n;
    printno(n);
}