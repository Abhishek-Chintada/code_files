#include <cstdio>



struct speedUpdate {
    double speed_mps;
};

struct carDetected {
    double distance;
    double speed_mps;
};

struct serviceBus {
    void publish(const brakeCommand&);
    // --snip--
};

struct brakeCommand {
    double time_before_collision;
};

template<typename T>
struct autoBrake {
    autoBrake(const T& publish);
    void publish(const speedUpdate&);
    void publish(const carDetected&);
    private:
    const T& publish;
};

int main(void) {
    return 0;
}