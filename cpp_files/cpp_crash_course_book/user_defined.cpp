#include <cstdio>
#include <stdexcept>

struct ReadOnlyInt {
    ReadOnlyInt(int val) : val{val} {
        printf("The value has been assigned successfully.\n");
    }
    ReadOnlyInt operator*(const ReadOnlyInt& other) {
        return this->val*other.val;
    }
    ReadOnlyInt operator*(int other) {  // operator overload.
        return ReadOnlyInt(this->val*other);
    }
    int get() const {
        return this->val;
    }
    explicit operator int() const {
        return val;
    }
    private:
        const int val;
};

int main(void) {
    ReadOnlyInt a{ 450 };
    auto b = a * 40;
    printf("This is the original value in a : %d\n", a.get());
    printf("This is the result of b : %d\n", b.get());
    return 0;
}