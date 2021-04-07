#include "HotDogStand.h"

// class HotDogStand{
//     public:
        
//         HotDogStand(string name,int sold = 0){
//             id = name;
//             soldnum = sold;
//             assa += sold;
//         }
//         void justSold(){
//             soldnum++;
//             assa++;
//         }
//         void print(){
//             cout<< id<< " "<< soldnum<< endl;
//         }
//         static int allStandSoldAmount(){
//             return assa;
//         }
//     private:
//         string id;
//         int soldnum;
//         static int assa;
// };

int HotDogStand::assa = 0;
int main(void)
{
	HotDogStand stand1("Stand1", 0);
	HotDogStand stand2("Stand2", 100);
	HotDogStand stand3("Stand3");
	stand1.justSold();
	stand2.justSold();
	stand3.justSold();
	stand1.print();
	stand2.print();
	stand3.print();
	std::cout << "Total Sold : " << HotDogStand::allStandSoldAmount() << std::endl;
	return 0;
}

