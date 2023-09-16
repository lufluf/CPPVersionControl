#include "raindrops.h"

using namespace std;

namespace raindrops {

    int getNumber(int(number)) {
        std::cout << "Please enter a number: ";
        int number{};
        std::cin >> number;
    }

    string raindrops(int(number)) {
       
        if (number % 3 == 0) 
            return "Pling";

        if (number % 5 == 0)
            return "Plang";

        if (number % 7 == 0)
            return "Plong";
        else
            return std::to_string(number);
            // int number;
           // std::string str = std::to_string(int(number));

    }

}  // namespace raindrops
