#include <iostream>
using namespace std;


class demo{
    public:     //: is access modifier
        int a=3;
};

class inher : public demo{  // : is used to inherit
    public: 
        int b = 5;
        int c = 7;

        inher(int X, int Y): b(X), c(Y){}; // initialization lists
    /** line 15 is equivalent to:
     *  inher(int X, int Y){
     *      b = X; c = Y; 
     *  }
     * NOTE THAT THIS IS ONLY AVAILABLE IN CONSTRUCTOR
     * */
};

/** What is : in C++ ? **/
int main(){
/* there's no an exact name of this syntax since its multiple usages */
/* Usage 1 : Aceess modifier */

/*Usage 2: inheritance*/

/*Usage 3: initialization lists*/
    return 0;
}