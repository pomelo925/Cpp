#include <iostream>
#include <exception>
using namespace std;

class myError : public exception {  //inherit exception class 
    public:
        int check;
            myError(int input): check(input){}; //initialization lists
        
        void what(){    //override
            cout << "myError: " << check << "is too large" << endl;
        }
};

int main() {
    int user;
    cin >> user;
    try{
        if(user > 100) throw myError(user);
    }catch(myError &e){
        e.what();
        return EXIT_FAILURE;
    }

    cout << "args set successfully" << endl;

    return 0;
}