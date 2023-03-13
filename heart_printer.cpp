// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
#include <vector>

class printer_super {

    private:
        void print_title(std::string title){
            std::cout << ">popular " + title + " cookies" << std::endl;
        }

        void print_list_alphabetical(std::vector<std::string> str_vect){
            
            //sort alphabetically
            //ascending order by default
            std::sort(str_vect.begin(), str_vect.end());
            
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

    protected:
        void print_menu(std::string title, std::vector<std::string> cookie_vect){
            print_title(title);
            print_list_alphabetical(cookie_vect);
            print_heart();
        }

};

class printer_france : public printer_super {
    private:
    std::string title = "french";

    std::vector<std::string> cookie_vect = {
        "Petit Beurre",
        "Macarons",
        "Biscuit rose de Reims"
    };

    public:
    void print_menu(){
        printer_super::print_menu(title, cookie_vect);
    }

};

class printer_uk : public printer_super {
    private:
    std::string title = "uk";

    std::vector<std::string> cookie_vect = {
    "custard cream",
    "hobnobs",
    "rich tea"
    };

    public:
    void print_menu(){
        printer_super::print_menu(title, cookie_vect);
    }

};


int main() {

    printer_france france_inst;
    printer_uk uk_inst;

    france_inst.print_menu();
    uk_inst.print_menu();

    return 0;
}

//https://old.reddit.com/r/cpp_questions/comments/5lqm5w/when_to_use_arrays_vs_vectors_vs_lists/
