// Sai Anirvinya Kolli 
// 9/22/2025
// Ifstatement lab 

#include <iostream>



int main()
{
    //Arrays
    std::string minorThings[3] = {"have to go to school", "have backpacks", "play with legos"};
    std::string adultThings[4] ={"pay taxes", "have kids", "get married", "work at a job"};
    std::string seniorThings[3] ={"retire", "relax", "go to a retiremnt home"};

    //input 
    int age; 
    std:: string country;
    std::cout << "HEYA; Enter your age"; 
    std::cin >> age; 
    std::cout << "HEYA; Enter your country"; 
    std::cin >> country; 

    //if statement 
    if (age  < 18) {
        std::cout << "Things you can do as a minor in " << country;
        for (int i = 0; i < 3; i++){
            std::cout << minorThings[i] << ", ";
        }
        std::cout << "\n";
    }
    else if (age < 84) {
        std::cout << "Things you can do as a adult in " << country;
        for (int i = 0; i < 4; i++){
            std::cout << adultThings[i]<< ", ";
        }
        std::cout << "\n";
    }
    else {
        std::cout << "Things you can do as a senior in " << country;
        for (int i = 0; i < 3; i++){
            std::cout << seniorThings[i] << ", ";
        }
        std::cout << "\n";
    }
return 0;
}




