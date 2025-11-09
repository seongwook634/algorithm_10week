#include <iostream>
#include <vector>
#include <algorithm>

int binomialCoefficient(int n, int k) {
    // 예외 처리: k < 0 또는 k > n인 경우 (정의에 따라 0)
    if (k < 0 || k > n) {
        return 0;
    }

    // dp[i][j]는 iCj의 값을 저장합니다.
    std::vector<std::vector<int>> dp(n + 1, std::vector<int>(k + 1, 0));

    // i는 'n' 역할을, j는 'k' 역할을 합니다.
    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= std::min(i, k); ++j) {
            if (j == 0 || j == i) {
                dp[i][j] = 1;
            }
            else {
                dp[i][j] = dp[i - 1][j] + dp[i - 1][j - 1];
            }
        }
    }

    return dp[n][k];
}

int main() {
    int n, k;

    n = 5;
    k = 2;
    std::cout << n << "C" << k << " = " << binomialCoefficient(n, k) << std::endl; 

    n = 4;
    k = 4;
    std::cout << n << "C" << k << " = " << binomialCoefficient(n, k) << std::endl; 

    n = 7;
    k = 0;
    std::cout << n << "C" << k << " = " << binomialCoefficient(n, k) << std::endl;

    n = 15;
    k = 10;
    std::cout << n << "C" << k << " = " << binomialCoefficient(n, k) << std::endl;

    return 0;
}