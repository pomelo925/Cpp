#include <iostream>
#include <cstdlib>

using namespace std;

class StudentInfo{
    public:
        char id;
        int weight;
        int height;
    
    //上述變數設為public, 該class的函式就都能直接使用
    int area(){
        return weight * height; 
    }
};

//class基礎範例
int main(){
    StudentInfo Mary;
    Mary.id = 3;
    Mary.weight = 45;
    Mary.height = 155;
    
    cout << Mary.height * Mary.weight << endl;
    return 0;
}