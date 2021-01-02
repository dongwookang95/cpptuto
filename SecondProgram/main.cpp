#include <iostream>
using namespace std;

int main(){
    const int priceSmall = 25;
    const int priceLarge = 35;
    const float salesTax = 0.06;
    const int estimateValid = 30;

    std::cout << "How many small rooms?" <<endl;
    int numberSmall {0};
    std::cin >> numberSmall;
    std::cout << "How many Large rooms?"<<endl;
    int numberLarge {0};
    std::cin >> numberLarge;

    std::cout << "Estimate for carpet cleaning service"<<endl;
    std::cout << "# of small rooms : " << numberSmall<<endl;
    std::cout << "# of large rooms : " << numberLarge<<endl;
    std::cout << "Price per small room : $"<<priceSmall<<endl;
    std::cout << "Price per Large room : $"<<priceLarge<<endl;
    int totalPriceSmall = numberSmall * priceSmall;
    int totalPriceLarge = numberLarge * priceLarge;
    int totalCost = totalPriceSmall+totalPriceLarge;
    std::cout << "Cost : $" << totalCost <<endl;
    double totaltax = totalCost*salesTax;
    std::cout << "tax : $" <<totaltax<<endl;
    std::cout << "====================================="<<endl;
    std::cout << "Total estimate: $"<<totalCost + totaltax<<endl;
    std::cout << "This estimate is valid for : "<<estimateValid<<" days"<<endl;


    

  return 0;
}