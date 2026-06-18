#include <cstdio>
#include <cstddef>
#include <stdexcept>
#include <new>

struct Bucket {
    static const size_t data_size{4096};
    std::byte data[data_size];
};

struct Heap {
    //Allocation
    void* allocate(size_t datasize_req) {
        if(Bucket::data_size < datasize_req) {
            throw std::bad_alloc();
        }
        for(size_t i{} ; i < n_heap_buckets ; i++) {
            if(!bucket_used[i]) {
                bucket_used[i] = true;
                return buckets[i].data;
            }
        }
        throw std::bad_alloc();
    }
    // freeing the memory mate.
    void free(void* p) {
        for(size_t i{} ; i < n_heap_buckets ; i++) {
            if(buckets[i].data == p) {
                bucket_used[i] = false;
            }
        }
    }
    private:
        static const size_t n_heap_buckets{ 10 };
        Bucket buckets[n_heap_buckets];
        bool bucket_used[n_heap_buckets] {};
};

Heap heap;

// overriding the basic new functions.
void* operator new(size_t n_bytes) {
    void* ptr = heap.allocate(n_bytes);
    printf("The allocation of %zu bytes is done successfully.\n", n_bytes);
    return ptr;
}

void operator delete(void* p) noexcept {
    heap.free(p);
    printf("Memory of %p have been freed successfully.\n", p);
}

int main(void) {
    auto x = new(int){10};
    printf("x -> %d\n", *x);
    printf("This is the size of x -> %zu\n", sizeof(*x));
    delete(x);
    return 0;
}