#include <iostream>
#include <ctime>
int main() {
        //Question 1: 7 PM; UTC+9
        //Question 2: UTC-7
    std::time_t local = time(nullptr);
    std::tm* localTime = std::localtime(&local);
    std::cout << "Time: " << ctime(&local) << std::endl;

    return 0;

}

