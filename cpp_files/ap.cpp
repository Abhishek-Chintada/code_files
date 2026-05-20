#include <cstdio>
struct College
{
    char name[256];
};
void printName(College *clg_ptr, size_t size)
{
    for(size_t i = 0; i < size; i++)
    {
        printf("%s\n", (clg_ptr+i)->name);
    }
}
int main()
{
    College colleges[] = {"SRK", "GSL", "IITH"};
    College *clg_ptr = colleges;
    printName(clg_ptr, sizeof(colleges)/sizeof(College));
}