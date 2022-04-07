#include <iostream>
#include <cstdlib>

using namespace std;

inline int add(int a, int b){return a+b;} // add 函式設為inline(行內涵數) 

// 說明 inline //
int main(){
    int x = 3;
    int y = 4;
    cout << add(x, y) << endl;
}

/*
問題:
    函式能節省程式長度及提升可讀性，但執行效率會變低
    因為跑到函數時必須先將目前的狀態(儲存在暫存器上的指令、相關資料參數)置入暫存記憶體中
    等到函數執行完再從暫存記憶體中取回

解決:
    將這些堆疊存取的動作設為INLINE
    當程式讀到這些函數時，函數的程式碼會直接插入程式中，而非跳躍指令
    但如果這些重複執行的程式碼偏長，還是建議用正常函數
    寧可犧牲執行效率也不要浪費大量記憶體
*/