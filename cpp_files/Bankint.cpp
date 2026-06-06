#include <cstdio>

struct Logger {
    virtual ~Logger() = default;
    virtual void log_transfer(long from, long to, double amount) = 0;
};

struct ConsoleLogger : Logger {
    void log_transfer(long from, long to, double amount) override {
        printf("[cons] : %ld -> %ld : %lf\n", from, to, amount);
    }
};

struct FileLogger : Logger {
    void log_transfer(long from, long to, double amount) override {
        printf("[file] : %ld -> %ld : %lf\n", from, to, amount);
    }
};

struct Bank {
    Bank(Logger& input_logger) : logger{input_logger} {
        printf("The logger is set up for the bank successfully.\n");
    }
    void make_transfer(long from, long to, double amount) {
        logger.log_transfer(from, to, amount);
    }
    private:
        Logger& logger;
};

int main(void) {
    ConsoleLogger cons_logger;
    Bank bank(cons_logger);
    bank.make_transfer(123456789, 987654321, 1000.0);
    return 0;
}