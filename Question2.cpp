// < Write a program to print the sum o" all odd numbers from a to b (inclusive) using
// recursion<  4 9= 5 + 7+ 
#include<iostream>
using namespace std;
void printoddno(int a, int b)
{
    if(a==b+1)return ;
    if(a%2!=0)cout<<a<<" ";
    printoddno(a+1,b);

}
    
int main()
{
    int a;
    int b;
    cout<<" Enter the number a and b for which you want to print odd no"<<endl;
    cin>>a;
    cin>> b;
    printoddno(a,b);
}