#include <cstdio>

namespace ML {
    class vector {
        public:
            void print_vector() {
                printf("This is the vector from the ML.\n");
            }
    };
};

namespace lavada {
    class vector {
        public:
            void print_vector() {
                printf("This is the vector from lavada.\n");
            }
    };
};

int main(void) {
    ML::vector v_ml;
    v_ml.print_vector();
    lavada::vector v_lavada;
    v_lavada.print_vector();
    return 0;
}