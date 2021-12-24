#include<iostream>
using namespace std;

int  gcd(int ,int);

int main(){
    int x, y;
    cin >> x >> y;
    cout << gcd(x,y);
    return 0; 
}
int  gcd(int m,int n)
{
    int t;
    if(m<n)
    {
        t=m;
        m=n;
        n=t;
    }
    if(m%n==0)
    {
        return n;
    }
    else 
    {
        return gcd(n,m%n);
    }




}