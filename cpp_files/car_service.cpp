#include <cstdio>
#include <stdexcept>

struct speedUpdate {
    double velocity_mps;
};

struct carDetected {
    double distance;
    double velocity_mps;
};

struct brakeCommand {
    double time_in_sec;
};

struct serviceBus {
    void publish(const brakeCommand&);
};

template<typename T>
struct autoBrakeService {
    autoBrakeService(const T& publish);
    void observe(const speedUpdate&);
    void observe(const carDetected&);
    private:
        const T& publish;
};
