// Online C++ compiler to run C++ program online
#include <iostream>

//print a heart with slashes
//minimal hard-coding

void print_heart(){
    std::string str_a = "/ \\";
    
    std::cout << str_a + str_a << std::endl;
    
    for (int i = 0; i < 3; i++){

        /*
        outer_spaces \ middle_spaces / outer_spaces
        */

        std::string outer_spaces = std::string(i, ' ');
        std::string middle_spaces = std::string((2 - i) * 2, ' ');
        
        std::cout << outer_spaces + "\\" + middle_spaces + str_a[0] + outer_spaces << std::endl;

    }
    
    /*
    
    / \/ \
    \    /    (0 spaces)\(4 spaces)/(0spaces)
     \  /     (1 spaces)\(2 spaces)/(1 spaces)
      \/      (2 spaces)\(0 spaces)/(2 spaces)
    
    */
}

int main() {
    print_heart();
    
    return 0;
}