#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int>>pair_list_t;
//typedef std::string text_t;
//typedef int numero_t;

using text_t = std::string;
using numero_t = int;

int main() {
//    std::vector<std::pair<std::string, int>>pair_list;
//    pair_list_t pair_list;

    text_t texto = "Hola mundo";
    numero_t edad =45; 
    std::cout <<texto<<" #### "<<edad<<std::endl;
    return 0;

}