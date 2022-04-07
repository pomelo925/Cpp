#include <iostream>
#include <tuple>

using namespace std;

tuple<int, double, char> demo(){
    return make_tuple(20,4.2,'p'); //make_tuple: 創造一個tuple 物件
}

// How to return multiple variables in a function
int main(){
    int a = 100;
    double b = 50.2;
    char c = 'h';

    tie(a,b,c) = demo();    // tie解包元素，把demo方法回傳的tuple元素賦值給tie對應的參數
    cout << a << endl << b << endl << c;
    // 印出結果可發現tuple是傳參考的
}