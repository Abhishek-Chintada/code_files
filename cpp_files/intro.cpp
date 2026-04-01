#include <iostream>
// the above statement is a preprocessor statement. all the libraries are preprocessed.
void Log(const char* message);
int main() {
    Log("hello world!");
    std::cin.get(); // compiler just waits for us to press enter on this line
}

// compiler is an abstract syntax trace.
// it translates the english code into machine understandable object files.
// the include statement just copies the code from the library and adds it to the current code snippet.
// // #define element1 element2 : the define keyword just checks for the element1 and replaces that with the element2.!
// #if and #endif are the preprocessor statement which define what to compile based on the conditions provided.