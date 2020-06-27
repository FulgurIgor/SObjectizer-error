#include "Timers.cpp"

void initTimers(so_5::environment_t &env) {
  Updater updaterState = {"StateTimer"};
  env.register_agent_as_coop(env.make_agent<Agent>(updaterState, 200));
}

int main() {
  try {
    so_5::launch(&initTimers);
  } catch (const std::exception &ex) {
    std::cerr << "Error: " << ex.what() << std::endl;
    return 1;
  }
  return 0;
}