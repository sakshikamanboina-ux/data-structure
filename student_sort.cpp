#include <iostream>
#include<string>
using namespace std;

int main() {
    int marks[5];
    
    std::cout << "Enter the marks of 5 students:\n";
    for (int i = 0; i < 5; i++) {
        std::cout << "Student " << i + 1 << ": ";
        std::cin >> marks[i];
    }
    
    for (int i = 0; i < 5 - 1; i++) {
        for (int j = 0; j < 5 - i - 1; j++) {
            if (marks[j] < marks[j + 1]) {
                int temp = marks[j];
                marks[j] = marks[j + 1];
                marks[j + 1] = temp;
            }
        }
    }
    
    std::cout << "\nMarks from Highest to Lowest:\n";
    for (int i = 0; i < 5; i++) {
        std::cout << "Rank " << i + 1 << ": " << marks[i] << "\n";
    }
    
    return 0;
}
