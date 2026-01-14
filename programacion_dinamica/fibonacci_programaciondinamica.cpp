#include <iostream>
using namespace std;

long long int fibonacci(int n)
{
    if (n <= 1)
        return n;
    
    long long int dp[n+1];
    dp[0] = 0;
    dp[1] = 1;

    for(int i = 2; i <= n; i++){
        dp[i] = dp[i-1] + dp[i-2];
        cout << dp[i] << endl;
    }

    return dp[n];
}

int main(){

    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    cout << "Fibonacci de " << n << " es: " << fibonacci(n) << endl;
    return 0;
}