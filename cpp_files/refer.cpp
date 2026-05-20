#include <cstdio>

struct ClockoftheLongNow
{
    private: int year = 0;
    public:
        ClockoftheLongNow()
        {
            year = 2019;
        }
        void set_year(int new_year)
        {
            if(new_year >= year)
            {
                year = new_year;
            } else {
                printf("The year is not a valid input!\n");
                return;
            }
        }
        int get_year()
        {
            return year;
        }
};

void add_year_reference(ClockoftheLongNow &clock)
{
    clock.set_year(clock.get_year() + 1);
}

void add_year_pointer(ClockoftheLongNow *clock)
{
    clock->set_year(clock->get_year() + 1);
}

int main(void)
{
    ClockoftheLongNow clock;
    printf("The default year is %d\n", clock.get_year());
    add_year_reference(clock);
    printf("The present year(by reference) is %d\n", clock.get_year());
    add_year_pointer(&clock);
    printf("The present year (by pointers) is %d\n", clock.get_year());
    return 0;
}