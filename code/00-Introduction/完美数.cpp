//@File    :   完美数.cpp
//@Time    :   2022/12/26 22:40:48
//@Author  :   delicay
/*

*/
#include <bits/stdc++.h>

using namespace std;

int getDivisorSum(int n) {
    vector<int> ans;
    for (int i = 1; i <= n / i; ++i) {
        if (n % i == 0) {
            ans.emplace_back(i);
            // 不要加上本身
            if (i != n / i && n / i != n) {
                ans.emplace_back(n / i);
            }
        }
    }
    // 从 0 开始加起来
    int res = accumulate(ans.begin(), ans.end(), 0);
    // printf("res = %d\n", res);
    return res;
}

int main() {
    // 找到 4 个完美数
    int idx = 1;
    int cnt = 0;
    // getDivisorSum(28);
    while (cnt < 4) {
        if (getDivisorSum(idx) == idx) {
            printf("%d ", idx);
            ++cnt;
        }
        ++idx;
    }
    puts("");
    return 0;
}
