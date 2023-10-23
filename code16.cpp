#include <iostream>

int main() {
    int amount;
    
    // Input the amount
    std::cout << "Enter the amount in rupees: ";
    std::cin >> amount;
    
    // Calculate the number of each type of note
    int hundred_notes = amount / 100;
    int fifty_notes = (amount % 100) / 50;
    int ten_notes = ((amount % 100) % 50) / 10;
    int one_notes = ((amount % 100) % 50) % 10;
    
    // Output the results
    std::cout << "Number of 100 rupee notes: " << hundred_notes << std::endl;
    std::cout << "Number of 50 rupee notes: " << fifty_notes << std::endl;
    std::cout << "Number of 10 rupee notes: " << ten_notes << std::endl;
    std::cout << "Number of 1 rupee notes: " << one_notes << std::endl;
    
    return 0;
}
