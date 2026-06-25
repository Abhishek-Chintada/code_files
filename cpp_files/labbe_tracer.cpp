#include <cstdio>

struct Tracer {
    Tracer(const char *name) : name{name} {
        printf("The tracer %s is created.\n", name);
    }
    ~Tracer() {
        printf("The tracer %s is deleted.\n", name);
    }
    private:
        const char *name;
};

int main(void) {
    printf("The main function is invoked.\n");
    Tracer a{"a"};
    Tracer b{"b"};
    Tracer c{"c"};
    return 0;
}