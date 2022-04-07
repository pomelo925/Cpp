#include <iostream>
#include <cstdlib>

using namespace std;

class Car{
    private:
        const char *color; //傳遞字串時要用 const char* 型別或是 std::string& 
        int price;
        bool avail;
    
    public:
    // 建構元 Constructor (名字一定要和 Class_name 相同, 也不能有回傳值)
        Car(const char *c, int p, bool a){
            color = c;
            price = p;
            avail = a;
        }
    // 建構元 Constructor 的 overloading
        Car(void){
            color = "white";
            price = 0;
            avail = 0;
        }

        void showData(Car car){
            cout << car.color << endl << car.price << endl << car.avail << endl;
        }
};

int main(){
    Car test1("red", 1000, 1);
    Car test2;

    cout << "=== test1 ===" << endl;
    test1.showData(test1);
    cout << "=== test2 ===" << endl;
    test2.showData(test2);
 }