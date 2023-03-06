// 1120306-02.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) { sum += i; }
    }
    cout << sum << endl;
}
