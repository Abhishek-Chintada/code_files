#include <cstdio>
#include <stdexcept>
#include <cstddef>
#include <utility>

template<typename T>
struct simpleUniquePointer {
    simpleUniquePointer() = default;
    simpleUniquePointer(T* point_to) {
        pointer = point_to;
        printf("The pointer is assigned successfully.\n");
    }
    ~simpleUniquePointer() {
        if(pointer) {
            delete(pointer);
            printf("The pointer is deleted successfully.\n");
        }
    }
    simpleUniquePointer(simpleUniquePointer& other) = delete;
    simpleUniquePointer& operator=(const simpleUniquePointer& other) = delete;
    simpleUniquePointer(simpleUniquePointer&& other) noexcept : pointer{other.pointer} {
        other.pointer = nullptr;
        printf("Pointer successfully moved, original set to null.\n");
    }
    simpleUniquePointer& operator=(simpleUniquePointer&& other) noexcept {
        if(pointer) delete pointer;
        pointer = other.pointer;
        other.pointer = nullptr;
        return *this;
    }
    T* get() {
        return pointer;
    }
    private:
        T* pointer;
};

struct Tracer {
    Tracer(const char* name) : name{name} {
        printf("%s -> Constructing\n", name);
    }
    ~Tracer() {
        printf("%s -> Destructing.\n", name);
    }
    private:
        const char* const name;
};

void consumer(simpleUniquePointer<Tracer> consumer_ptr) {
    printf("(cons) consumer_ptr : %p\n", consumer_ptr.get());
}

int main(void) {
    auto ptr_a = simpleUniquePointer<Tracer>(new Tracer{"ptr_a"});
    printf("(main) ptr_a : %p\n", ptr_a.get());
    consumer(std::move(ptr_a));
    printf("(main) ptr_a : %p\n", ptr_a.get());
    return 0;
}