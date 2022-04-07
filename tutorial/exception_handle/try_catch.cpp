#include <iostream>
#include <exception> 
#include <vector>

using namespace std;

int main(){
    vector<int> v = {1,2,3};
    try{
        cout << v[2] << endl;
        cout << v[3] << endl;  //不會丟出exception
        cout << v.at(2) << endl;
        cout << v.at(3) << endl; //使用at方法時會丟出exception
    }catch(exception &e){   // exception 建議都用傳參考
        cout << "exception: " << e.what() << endl;  //what()是error的詳細內容
        throw;
    }

    return 0;
}