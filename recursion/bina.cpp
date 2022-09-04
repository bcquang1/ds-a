#include <iostream>

using namespace std;

int factorial(int n);
void decimal_binary(int n);

int main()
{
    int gt = factorial(6);
    cout<<"6!="<<gt<<endl;
    cout<<"Binary number after convert:"<<endl;
    decimal_binary(50);
}

int factorial(int n)
{
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

void decimal_binary(int n)
{
    if (n > 0)
    {
        int t = n % 2;
        decimal_binary(n/2);
        cout<<t<<endl;
    }
}
