#include <iostream>
#include <tuple>
#include <string>

using namespace std;

//tuple是一個固定大小的不同型別值的集合, 我們也可以把他當做一個通用的結構體來用，
//不需要建立結構體又獲取結構體的特徵，在某些情況下可以取代結構體使程式更簡潔直觀
int main(){
//幾種宣告方式:
    tuple<string, int> tp;
    tp = make_tuple("name", 20);
//
    tuple<string, int> tp2 ("Tim", 18);
//
    auto tp3 = make_tuple(1, "house", 3.14);    //auto會自動建立對應的型態

//幾種常用函數:
    //取值
    cout << get<0>(tp) << endl;
    cout << get<1>(tp) << endl;
    
    //得元素總數
    cout << tuple_size<decltype(tp3)>::value << endl;
}