#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n <= 1)
    {   
        cout << n << endl;
        return n;
    } else
    cout << fibonacci(n-1) << endl;
    cout << fibonacci(n-2) << endl;
    return fibonacci(n-1) + fibonacci(n-2);
}


int main()
{

    cout << fibonacci(5);

    return 0;
}