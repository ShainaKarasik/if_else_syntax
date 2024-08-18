#include <iostream>

/* Like indentations, it is best practice to always include curly braces even if they arent mandatory all the time */
int main() {

    if (10 % 2 == 0) {
        std::cout << "10 is even" << std::endl;
    }
    else {
        std::cout << "10 is odd" << std::endl;
        std::cout << "False" << std::endl;
    } //this curly brace groups in the second output statement under "else" (false for the if conditional) 

    return 0;

}
