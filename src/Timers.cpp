#include <so_5/all.hpp>

#include <iostream>

struct Updater {
  std::string name;
};

class Agent final : public so_5::agent_t {
public:
  Agent(context_t ctx, Updater updater, uint milliseconds)
      : so_5::agent_t{ctx} {
    _updater = updater;
    _step = milliseconds;
  }
  void so_define_agent() override { so_subscribe_self().event(&Agent::run); }
  void so_evt_start() override {
    _agent = so_5::send_periodic<Updater>(*this, std::chrono::seconds::zero(),
                                          std::chrono::milliseconds(_step),
                                          _updater);
  }

private:
  so_5::timer_id_t _agent;
  Updater _updater;
  uint _step;
  void run(const Updater &updater) {
  }
};