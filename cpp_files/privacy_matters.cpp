#include <cstdio>

struct Clock 
{
    private: int year;
    public:  
    Clock() {
        year = 2019;
    };
    bool set_year(int user_input)
    {
        if(user_input < 2019)
        {
            printf("Invalid input... we cannot go back in time!\n");
            return false;
        }
        year = user_input;
        return true;
    }
    int get_year()
    {
        return year;
    }
    void add_year()
    {
        year++;
    }
};

int main(void)
{
    Clock clock;
    printf("The default year is : %d\n", clock.get_year());
    clock.set_year(2525);
    printf("The year now is : %d\n", clock.get_year());
    clock.set_year(0);
    printf("The year now is : %d\n", clock.get_year());
    clock.add_year();
    printf("The year now is : %d\n", clock.get_year());
    return 0;
}