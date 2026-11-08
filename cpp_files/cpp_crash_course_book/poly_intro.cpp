#include <cstdio>
#include <stdexcept>

enum class LoggerType {
    Console,
    File
};

struct ConsoleLogger {
    void log_transfer(long from, long to, double amount) {
        printf("[console] %ld -> %ld : %lf\n", from, to, amount);
    }
};

struct FileLogger {
    void log_transfer(long from, long to, double amount) {
        printf("[file] %ld, %ld, %lf\n", from, to, amount);
    }
};

struct Bank {
    Bank() : type(LoggerType::Console) {}

    void set_logger(LoggerType logger_type) {
        type = logger_type;
    }

    void make_transfer(long from, long to, double amount) {
        switch(type) {
            case LoggerType::Console:
                console_logger.log_transfer(from, to, amount);
                break;
            case LoggerType::File:
                file_logger.log_transfer(from, to, amount);
                break;
            default:
                throw std::runtime_error("Invalid logger type\n");
        }
    }

    private:
        LoggerType type;
        ConsoleLogger console_logger;
        FileLogger file_logger;
};


int main(void) {
    Bank bank;
    bank.set_logger(LoggerType::Console);
    bank.make_transfer(45234, 2454, 4125.13);
    bank.set_logger(LoggerType::File);
    bank.make_transfer(8586, 22354, 876.25);
    printf("Program finished successfully\n");
    return 0;
}