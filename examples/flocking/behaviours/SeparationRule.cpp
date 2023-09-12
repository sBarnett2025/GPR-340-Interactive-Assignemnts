#include "SeparationRule.h"
#include "../gameobjects/Boid.h"
#include "../gameobjects/World.h"
#include "engine/Engine.h"

Vector2f SeparationRule::computeForce(const std::vector<Boid*>& neighborhood, Boid* boid) {
  int flockmates = 0;
  if (!neighborhood.empty())
  {
    for (auto neighbor: neighborhood){
      auto diff = boid->getPosition() - neighbor->getPosition();
      auto distance = diff.getMagnitude();
      if (distance < desiredMinimalDistance)
      {
        flockmates++;
        auto hat = diff.normalized();
        auto force = hat / distance;
        
      }

    }
  }



}

bool SeparationRule::drawImguiRuleExtra() {
  ImGui::SetCurrentContext(world->engine->window->imGuiContext);
  bool valusHasChanged = false;

  if (ImGui::DragFloat("Desired Separation", &desiredMinimalDistance, 0.05f)) {
    valusHasChanged = true;
  }

  return valusHasChanged;
}
