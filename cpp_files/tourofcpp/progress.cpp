#include <exception>
#include <iostream>

struct Vector {
    int sz;
    double *elements;
};

bool vector_init(int s, double *elements) {
    Vector v;
    try {
        v.sz = s;
        v.elements = elements;
    } catch(std::exception e) {
        std::cout << "error occured : " << e.what() << "\n";
        return false;
    } return true;
}

bool vector_init(Vector &v, int s) {    // overloaded func
   try {
       v.elements = new double[s];
   } catch (std::exception e) {
       std::cout << "error occured : " << e.what() << "\n";
       return false;
   }
   v.sz = s;
   return true;
}

int main(void) {

    return 0;
}
