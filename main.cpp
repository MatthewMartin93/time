#include <iostream>
#include <ctime>
int offset;
int math;
int main() {
        //Question 1: 7 PM; UTC+9
        //Question 2: UTC-7
    //Exercise 1
    std::time_t local = time(nullptr);
    std::tm* localTime = std::localtime(&local);
    std::cout << "Time: " << ctime(&local) << std::endl;
    //Exercise 2
    std::time_t time2 = time(nullptr);
    std::cout << "What is the offset?" << std::endl;
    std::cin >> offset;
    time2 += offset * 3600;
    std::tm* timeZone = std::gmtime(&time2);
    std::cout << "Current time in your time zone: " << std::asctime(timeZone) << std::endl;
    //Exercise 3
    std::cout << "Given the function f(x) = x^5 - 3x^4 + 2x^3 - x^2 + 4x - 7,\n1. Find the critical points by first determining f'(x), \nthen set it equal to zero to solve for x. \n2. Use the second derivative test to classify the critical points as local maxima, minima, or saddle points.\n3. Find the inflection points by solving f''(x) = 0.\n4. Calculate f(2).\n5. Determine the absolute maximum and minimum values of f(x) on the interval [1, 3].\n6. Finally, compute the definite integral of f(x) from 1 to 3, i.e., \n∫ from 1 to 3 f(x) dx.\n The correct answer is the answer to number 6" << std::endl;
    std::time_t start_time = std::time(nullptr);
    std::cin >> math;
    if(math == 89.5){
        std::cout << "You got it right!" << std::endl;
    } else {
        std::cout << "You were wrong" << std::endl;
    }
    std::time_t end_time = std::time(nullptr);
    double time_taken = std::difftime(end_time, start_time);
    std::cout << "You took " << time_taken << " seconds to answer the question." << std::endl;
 
    
    
    return 0;

}