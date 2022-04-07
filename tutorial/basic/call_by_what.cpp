#include <iostream>
#include <cstdlib>

using namespace std;

//C 具有三種傳遞變數的方式: 傳指標, 傳參考, 傳值
int main(){
    int a = 3;

    //傳值 pass by value
    int b = a;

    //傳指標 pass by pointer/address
    int *c = &a;

    //傳參考 pass by reference 
    int &d = a;
    /* 解釋:
        d 直接"參考"了記憶體中的參數值，函式傳遞的時候也是直接傳遞參數值；
        參數接收部分則宣告一個擁有取址運算子的變數接受該參數位址；
        d 只是 a 的一個別名(alias)而已
    */

//Difference Between Reference Variable and Pointer Variable:
 
// 1) A reference is the same object, just with a different name and a reference must refer to an object. Since references can’t be NULL, they are safer to use. 
// 2) A pointer can be re-assigned while a reference cannot, and must be assigned at initialization only.
// 3) The pointer can be assigned NULL directly, whereas the reference cannot.
// 4) Pointers can iterate over an array, we can use increment/decrement operators to go to the next/previous item that a pointer is pointing to.
// 5) A pointer is a variable that holds a memory address. A reference has the same memory address as the item it references.
// 6) A pointer to a class/struct uses ‘->’ (arrow operator) to access its members whereas a reference uses a ‘.’ (dot operator)
// 7) A pointer needs to be dereferenced with * to access the memory location it points to, whereas a reference can be used directly.
}