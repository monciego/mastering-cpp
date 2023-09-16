#include <iostream>

int main() {
    /* compiled time error */

    /* 
        Errors that occur when you violate the rules of writing syntax
        e.g missing semicolon
     */
    // std::cout << "Hello Word!" << std::endl


    /* runtime error */

    /* 
        occurs when a program you're using or writing crashes or produces a wrong output
     */
    int value = 7/0;  // warning: division by zero [-Wdiv-by-zero]
    std::cout << "value : " << value << std::endl;

    return 0;
}