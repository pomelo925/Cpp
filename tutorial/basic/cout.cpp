#include <iostream>
#include <cstdlib>

using namespace std;
/**** namespace ****/
// 設定名稱空間(name space)為std
// C++ 的標準程式庫的類別與物件都定義在std這個名稱空間內
// 如果不寫這行，那就要把 cout 寫成 std::cout  

//cout 基礎範例
int main(){
    int a = 12;
    char ch = 'o';
    double b = 12.34;
    char word[] = "absolute";

    cout << ch << "is a char" <<endl;
    cout << a << " is an integer" << endl;
    cout << b << " is a float" << endl;
    cout << word << " is a char array" << endl;
    return 0;
} 