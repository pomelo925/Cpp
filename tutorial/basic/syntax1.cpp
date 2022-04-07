#include <iostream>
using namespace std;

int show = 100;

class Call1{
    public :
        void same(){
            cout << "called by Box1" << endl; 
        }
};

class Call2{
    public :
        void same(){
            cout << "called by Box2" << endl; 
        }
};

class Call : public Call1, public Call2{
}
;

/** What is :: in C++ **/
int main(){
/* :: is Scope Resolution Operator */
/*Usage 1: to distinguish global variable from local variable*/
    int show = 500;
    cout << "show: " << show << endl;
    cout << "::show: " << ::show << endl; //global


/*Usage 2: to  resolve the scope of function*/
    Call demo;
    demo.Call1::same();
    demo.Call2::same(); //use :: to tell which class is expected to call "same" function 
}