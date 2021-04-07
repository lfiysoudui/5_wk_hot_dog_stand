#include <iostream>  //cin cout
#include <string>    //String
using namespace std; //使用library中的標準命名空間

class HotDogStand{
    public:
        HotDogStand(string name);
        HotDogStand(string name,int sold);
        void justSold();
        void print();
        static int allStandSoldAmount();
    private:
        string id;
        int soldnum;
        static int assa;
};





