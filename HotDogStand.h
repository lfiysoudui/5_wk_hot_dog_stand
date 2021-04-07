#include <iostream>  //cin cout
#include <string>    //String
using namespace std; //使用library中的標準命名空間

class HotDogStand{
    public:
        HotDogStand();
        HotDogStand(string name,int sold = 0);
        void justSold();
        void print();
        static int allStandSoldAmount(){
            return assa;
        }
    private:
        string id;
        int soldnum;
        static int assa;
};





