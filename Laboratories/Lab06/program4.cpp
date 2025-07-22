#include <iostream>
#include <cstring>


void reverse(char str[]) {
    int len = strlen(str);  
    int start = 0;
    int end = len - 1;

    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}


int main() {
    char str[] = "Hello, World!";
   
    reverse(str);


    std::cout << str << std::endl;


    return 0;
}
