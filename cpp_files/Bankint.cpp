#include <cstdio>
// Test check
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

struct Lavada : Logger {
    void log_transfer(long from, long to, double amount) override {
        printf("Sanka Naaku.\n");
    }
};

struct Bank {
    /*Constructor Injection
    Bank(Logger& input_logger) : logger{input_logger} {
        printf("The logger is set up for the bank successfully.\n");
    }
    void make_transfer(long from, long to, double amount) {
        logger.log_transfer(from, to, amount);
    } 
    private:
        Logger& logger; */
    void Bank_set_logger(Logger* input_logger) {
        this->logger = input_logger;
        printf("The logger pointer has been initialized (or) changed successfully.\n");
    }
    void make_transfer(long from, long to, double amount) {
        // --snip--
        logger->log_transfer(from, to, amount);
    }
    private:
        Logger* logger = nullptr; // A property injection uses pointers instead of references like constructor injection.
};

int main(void) {
    ConsoleLogger cons_logger;
    // Constructor Injection.
    /*Bank bank(cons_logger);
    bank.make_transfer(123456789, 987654321, 1000.0);*/
    ConsoleLogger cons;
    FileLogger fil;
    Lavada lavada;
    Bank bank;
    bank.Bank_set_logger(&cons); // set to console print.
    bank.make_transfer(2351, 656867, 15153.154);
    bank.Bank_set_logger(&fil);
    bank.make_transfer(86984, 53462, 3585.234);
    bank.Bank_set_logger(&lavada);
    bank.make_transfer(54367, 435245, 46749.134);
    printf("The program executed successfully.\n");
    return 0;
}
