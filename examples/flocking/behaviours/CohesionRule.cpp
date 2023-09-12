#include "CohesionRule.h"
#include "../gameobjects/Boid.h"

Vector2f CohesionRule::computeForce(const std::vector<Boid*>& neighborhood, Boid* boid) {
  Vector2f cohesionForce = {0, 0};

  // todo: add your code here to make a force towards the center of mass
  // hint: iterate over the neighborhood

  // find center of mass
  Vector2f center = {0,0};
  if (!neighborhood.empty())
  {
    for (int i = 0; i < neighborhood.size(); i++)
    {
      center += neighborhood[i]->getPosition();
    }
    center /= neighborhood.size();

    cohesionForce = center - boid->getPosition();
  }
  // todo: test without normalized
  return cohesionForce.normalized();
}