#include <cstdio>
#include <cstdint>
struct PodStruct
{
  uint64_t integer;
  char b[256];
  bool c;
};
int main(void)
{
    int array[5];
    for(int element: array)
    {
        element = 0;
        printf("%d ", element);
    }
    printf("\n");
    PodStruct pod {42, "Abhishek Chintada"};
    printf("%llu, %s, %d\n", pod.integer, pod.b, pod.c);
    return 0;
}