#include <iostream>

using namespace std;

int fibo(int n);
void print_fibo(int n);
int main()
{
    int n;
    cout<<"enter a number:"<<endl;
    cin>>n;
    print_fibo(n);
    return 0;
}

int fibo(int n)
{
    if (n<=2)
        return 1;
    return fibo(n-1) + fibo(n-2);
}

void print_fibo(int n)
{
    for (int i=1;i<=n;i++)
    {
        cout<<fibo(i)<<endl;
    }
}
