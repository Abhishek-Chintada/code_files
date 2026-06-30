#include <cstdio>
#include <stdexcept>

struct Distillate {
    static int apply() {
        applications++;
        return applications;
    }
    private:
        inline static int applications = 0;
};

int main(void) {
    Distillate* distill; // shit -> performance loss + more typing.
    printf("<applications-1> : %d\n", distill->apply());
    printf("<applications-2> : %d\n", distill->apply());
    printf("<applications-3> : %d\n", distill->apply());
    printf("F it\n");
    return 0;
}