#include <iostream>
#include <vector>
using namespace std;

long long fib(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;

    vector<long long> memo(n + 1);

    memo[0] = 0;
    memo[1] = 1;

    for (int i = 2; i <= n; i++) {
        memo[i] = memo[i - 1] + memo[i - 2];
    }

    return memo[n];
}

int main() {
    int n;
    cout << "n 입력: ";
    cin >> n;

    cout << n << "번째 피보나치 수: " << fib(n) << endl;
    return 0;

}
