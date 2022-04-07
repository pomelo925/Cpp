#include <iostream>
#include <cstdlib>

using namespace std;

class Student{
    public: //C++ 預設成員屬性為private , 冒號後底下都會是 public 屬性, public 是指對 class 外 public 
        char id;
        int score;

    void setData(char i, int s){
        id = i;
        score = s;
    }
};

//重點
void showData(Student stu){
    cout << "id: " << stu.id << endl << "score: " << stu.score << endl;
}

int main(){
    Student Tom;
    Tom.setData('k', 100);
    showData(Tom);
}

/*** 重點 ***/
// Line 24: setData 是由物件 Tom 呼叫 setData 函式
// Line 25: showData 做的是將 Tom 物件傳遞到 showData函數裡面，並顯示該物件資料
