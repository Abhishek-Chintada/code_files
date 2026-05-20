#include <cstdio>
struct Algebra
{
    private: int result;
    public:
    int add(int a, int b)
  {
      result = a + b;
      return a + b;
  }
  int subtract(int a, int b)
  {
      result = a - b;
      return a - b;
  }
  void Algebra_result(void)
  {
      printf("The result obtained is %d\n.", result);
  }
};
int main(void)
{
    Algebra algebra;
    Algebra *algebra_ptr = &algebra;
    printf("The value of the algebra pointer is %p\n", algebra_ptr);
    algebra_ptr -> add(8, 10); // the member of pooointerrrr.
    algebra_ptr -> Algebra_result();
    int *myptr = nullptr;
    int x = 10;
    myptr = &x;
    printf("The %p is the pointer of variable x whose value is %d.\n", myptr, *myptr);
    return 0;
}
