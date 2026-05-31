#include <cstdio>

int add_one_to(int x) {
    x++;
    return x;
}

struct Point {
    int x;
    int y;
    Point(int x, int y):x{x}, y{y} {
        printf("The Point has been created with the specified values for x and y\n");
    }
    int get_x() const {
            return x;
    }
    int get_y() const {
            return y;
    }
};

Point make_transpose(const Point p) {
    Point result{p.get_y(), p.get_x()};
    return result;
}

int main(void) {
    auto original = 10;
    auto result = add_one_to(original);
    printf("The result has been calculated...\n");
    printf("The result : %d ; The original : %d\n", result, original);

    Point x{1, 2};
    Point y = make_transpose(x);

    printf("These are the values of x and y: \n");
    printf("x: %d, y: %d\n", x.get_x(), x.get_y());
    printf("x: %d, y: %d\n", y.get_x(), y.get_y());
    
    return 0;
}
