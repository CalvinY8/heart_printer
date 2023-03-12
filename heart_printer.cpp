// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
#include <vector>

void print_list_alphabetical(std::vector<std::string> str_vect, std::string title){
    
    //sort alphabetically
    //ascending order by default
    std::sort(str_vect.begin(), str_vect.end());
    
    std::cout << title << std::endl;
    
    for (std::string x : str_vect){
    	std::cout << x << std::endl;
    }
    
}

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

    std::string title = "popular uk cookies";
    
    std::vector<std::string> cookie_vect = {
    "custard cream",
    "malted milk",
    "rich tea",
    "chocolate hobnob",
    "ginger nut",
    "bourbon",
    "jammy dodger",
    "jaffa cake",
    "shortbread",
    "biscoff",
    "chocolate digestive" 
    };

    print_list_alphabetical(cookie_vect, title);
    print_heart();

    return 0;
}

//https://old.reddit.com/r/cpp_questions/comments/5lqm5w/when_to_use_arrays_vs_vectors_vs_lists/
