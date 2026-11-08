#include <_time.h>
#include <cstdio>

struct Clock
{
    int year;
  void add_year()
  {
      year++;
  }
};

int main()
{
    Clock clock;
    clock.year = 2025;
    printf("The present year is : %d\n", clock.year);
    clock.add_year();
    printf("The present year is : %d\n", clock.year);
    return 0;
}