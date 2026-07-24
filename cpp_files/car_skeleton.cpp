// services
struct speedUpdate {
    double velocity;
};
struct carDetected {
    double distance;
    double velocity;
};
struct brakeCommand {
    double timeToCollision;
};

// service bus
struct serviceBus {
    void publish(const brakeCommand&);
    // --snip--
};

// Auto Brake struct
template<typename T>
struct autoBrake {
    autoBrake(const T& publish);
    void observe(const speedUpdate&);
    void observe(const carDetected&);
    // --snip--
    private:
    const T& publish;
};

