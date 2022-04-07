#include <iostream>
#include <cstdlib>

using namespace std;

//要注意涵函式名稱不要和標準庫打架
void op(int, int);
void op(double, double);

//overload 基礎範例
int main(){
    int x=3, y=5;
    double X=19.23, Y=0.31;
    
    op(x,y);
    op(X,Y); 
}

void op(int a, int b){
    cout << a+b << endl;
}

void op(double a, double b){
    cout << a + b << endl;
}