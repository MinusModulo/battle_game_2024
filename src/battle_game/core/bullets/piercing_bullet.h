#pragma once
#include "battle_game/core/bullet.h"

namespace battle_game::bullet {
class PiercingBullet : public Bullet {
 public:
  PiercingBullet(GameCore *core,
             uint32_t id,
             uint32_t unit_id,
             uint32_t player_id,
             glm::vec2 position,
             float rotation,
             float damage_scale,
             glm::vec2 velocity);
  ~PiercingBullet() override;
  void Render() override;
  void Update() override;

 private:
  std::vector<bool> touched;
  glm::vec2 velocity_{};
};
}  // namespace battle_game::bullet
