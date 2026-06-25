// Getting trashed by frickin' shit of directives and namespaces.
#include <cstdio>

namespace Labbe {
    enum class Color { // VIBGYOR ra luccha.
        red,
        blue,
        green,
        violet,
        yellow,
        indigo,
        orange
    };

    struct Lavdesh {  // POD
        const char* name;
        Color color;
    };

    bool check_is_red(const Lavdesh& lavdesh) {
        return lavdesh.color == Labbe::Color::red;
    }
}

using namespace Labbe;

int main(void) {
    Color color = Color::red;
    Lavdesh lavdesh{"BSDK", color};
    auto boolralabbe = check_is_red(lavdesh);
    if(boolralabbe) {
        printf("True hai yeh sab bool.\n");
    }
    return 0;
}