#include <cstdio>

struct Tracer {
    Tracer(const char * name) : name{name} {
        printf("%s is constructed.\n", name);
    }
    ~Tracer() {
        printf("%s is destructed.\n", name);
    }
    private:
        const char * name;
};

static Tracer t1{"Static Variable"};
thread_local Tracer t2{"Thread_Local Variable."};

int main(void) {
    printf("A\n"); // Dividers for clarity of code.
    Tracer t3{"Automatic Variable"};
    printf("B\n");
    const auto* t4 = new Tracer{"Dynamic Variable"};
    printf("C\n");
    return 0;
}