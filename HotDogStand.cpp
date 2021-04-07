#include "HotDogStand.h"
HotDogStand::HotDogStand(string name){
            id = name;
            soldnum = 0;
}
HotDogStand::HotDogStand(string name,int sold = 0){
            id = name;
            soldnum = sold;
            assa += sold;
        }
void HotDogStand::justSold(){
            soldnum++;
            assa++;
        }
void HotDogStand::print(){
            cout<< id<< " "<< soldnum<< endl;
}

int HotDogStand::allStandSoldAmount(){
            return assa;
        }