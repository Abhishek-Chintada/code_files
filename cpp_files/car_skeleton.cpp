// services
struct speedUpdate {
  double velocity_mps;
};
struct carDetected {
  double distance_m;
  double velocity_mps;
};
struct brakeCommand {
  double timeToCollision_s;
};

template <typename T>
struct AutoBrake {
  AutoBrake(const T& publish) : publish{publish} {}
  void observe(const speedUpdate& cd) {}
  void observe(const car)
  private:
  double collision_threshold_s;
  double speed_mps;
  const T& publish;
}