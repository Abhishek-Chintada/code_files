#include <cstdio>
#include <stdexcept>
struct ConsoleLogger {
    void log_transfer(long from, long to, double amount) {
        printf("%ld -> %ld : %f\n", from, to, amount);
    }
};

struct Bank {
    ConsoleLogger logger;
    void transfer(long from, long to, double amount) {
        logger.log_transfer(from, to, amount);
    }
};

int main(void) {
    Bank bank;
    bank.transfer(123, 456, 100.0);
    bank.transfer(456, 123, 50.0);
    return 0;
}