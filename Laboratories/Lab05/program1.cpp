#include <iostream>

int add(int a, int b);
int mult(int a, int b);
int exp(int a, int b);


int main() {
    
   std::cout << exp(2, 6) << std::endl;

}


int exp(int a, int b) {
   int result = 1;


   for (int i = 0; i < b; i++) {
       result = mult(result, a);
   }
   return result;
}


int mult(int a, int b) {
   int result = 0;


   for (int i = 0; i < b; i++) {
       result = add(result, a);
   }
   return result;
}


int add(int a, int b) {
   int result = a + b;
   return result;
}
