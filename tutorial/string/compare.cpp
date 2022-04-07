#include <iostream>
#include <string>

using namespace std;

int main(){
    string str1 = "hello";
    string str2 =("hello");

    if(str1.compare("hello")==0){   //compare比較兩字串是否相等
        cout << "equal\n" ;     //相等要回傳0
    } else {
        cout << "different\n";
    }

    if(str1.compare(str2)==0){
        cout << "equal\n" ;
    } else {
        cout << "different\n";
    }
    
    if(str1 == str2){
        cout << "equal\n" ;
    } else {
        cout << "different\n";
    }
}