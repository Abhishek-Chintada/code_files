#include <cstdio>

enum Operation 
{
  Add,
  Subtract,
  Multiply,
  Divide,
};
struct Calculator
{
    private:
    Operation user;
    public:
    Calculator(Operation x)
    {
        user = x;
    }
    int calculate(int a, int b)
    {
        if(user == Operation::Add)
        {
            return a + b;
        } else if (user == Operation::Subtract)
        {
            return a - b;
        } else if (user == Operation::Multiply)
        {
            return a * b;
        } else if (user == Operation::Divide)
        {
            return a/b;
        } else {
            printf("Invalid Input!\n");
            return -1;
        }
    }
};
int main()
{
    int a = 10;
    int b = 5;
    Calculator calculator{Divide};
    int result = calculator.calculate(a, b);
    printf("The result is : %d\n", result);
    return 0;
}