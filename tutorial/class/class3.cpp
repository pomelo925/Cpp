#include <iostream>
#include <cstdlib>

using namespace std;

class Student{
    private: //預設即 private, 可不寫
        char id;
        int score;

    public:
        void setData(char i, int s){
        //因為 setData 在 Student 這個 class 裡面，所以可以碰到 private 的 id 和 score
            id = i;
            if(s >= 0 && s <= 100)  score = s;  //提升安全
        }
};   

//透過 public 函數存取 private 參數，提升安全性
int main(){
    Student Chris;
    Chris.setData('k', 100);
}