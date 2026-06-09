// Complete Guide to C++ Programming Foundations
// Exercise 04_06
// The Vector Class, by Eduardo Corpeño 

#include <vector>
#include <iostream>
#include <string>

int main(){
    std::vector<std::string> checkpoint = {"Start", "Forest", "Castle"};

    checkpoint.push_back("Cave");
    checkpoint.push_back("Finish");

    std::cout << "The game has: " << checkpoint.size() << " checkpoints." << std::endl;

    std::cout << "The checkpoint at the index 2 is: " << checkpoint[2] << std::endl;

    checkpoint[2] = "Dark Castle";
    std::cout << "The new checkpoint at the index 2 is: " << checkpoint[2] << std::endl;


    std::cout << std::endl << std::endl;
    return 0;
}
