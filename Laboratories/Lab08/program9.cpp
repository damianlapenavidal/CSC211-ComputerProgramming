/*
Write a recursive function in C++ to print out a pyrammid of '+' characters, similar to the ones we saw with nested loops. 
It should have the following header void pyr(int levels, int current_level);. For levels = 3 and current_level = 0 in your 
initial function call your function should print out:

+
++
+++
++
+

*/

#include <iostream>
#include <vector>
#include <string>

void pyr(int levels, int current_level){


    if (current_level == levels) {
        return;
    }


    for(int i = 0; i <= current_level ; ++i){
        std::cout << "+";
    }
    std::cout << std::endl;
   
    pyr(levels, current_level + 1);


    for (int i = 0; i <= current_level; ++i) {
        std::cout << '+';
    }
    std::cout << std::endl;
}

int main(){

    int a, b;
    a = 3;
    b = 0;
    pyr(a, b);
    return 0;
}