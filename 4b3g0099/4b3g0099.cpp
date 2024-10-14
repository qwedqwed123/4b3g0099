// 4b3g0099.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
#include <iostream>
#include <iomanip> // 用于格式化输出

using namespace std;

// 函数声明
void printMultiplicationTable(int n);
void performArithmeticOperations(int a, int b);

int main() {
    int n;

    cout << "請輸入乘法表的大小 n (n*n): ";
    cin >> n;

    printMultiplicationTable(n);

    int a, b;
    cout << "請輸入兩個數字進行四則運算 (例如 10 2): ";
    cin >> a >> b;
    performArithmeticOperations(a, b);

    return 0;
}

// 函数实现：打印乘法表
void printMultiplicationTable(int n) {
    cout << "乘法表 (" << n << "x" << n << "):" << endl;

    // 打印表头
    cout << "    ";
    for (int j = 1; j <= n; j++) {
        cout << setw(4) << j; // 设置输出宽度
    }
    cout << endl;

    // 打印分隔行
    cout << "   " << string(n * 4, '-') << endl;

    // 打印乘法表的内容
    for (int i = 1; i <= n; i++) {
        cout << setw(2) << i << " |"; // 打印行头
        for (int j = 1; j <= n; j++) {
            cout << setw(4) << i * j; // 打印乘积
        }
        cout << endl;
    }
}

// 函数实现：執行四則運算
void performArithmeticOperations(int a, int b) {
    cout << "四則運算结果：" << endl;
    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " - " << b << " = " << a - b << endl;
    cout << a << " * " << b << " = " << a * b << endl;

    if (b != 0) {
        cout << a << " / " << b << " = " << static_cast<double>(a) / b << endl;
    }
    else {
        cout << "除法：不能除以零！" << endl;
    }
}

// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
