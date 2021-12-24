#include<iostream>
using namespace std;




long long int  fibonacci(long long int k );

int main(){
    int x;
    cin >> x;
    cout << fibonacci(x);
    return 0; 

}
long long int  fibonacci(long long int k)
{
    if(k==0)
    {
        return 0;
    }
    else if(k==1)
    {
        return 1;
    }
    else 
    {

        return fibonacci(k-1)+fibonacci(k-2);
    }



}