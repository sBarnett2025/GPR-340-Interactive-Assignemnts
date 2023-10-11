#ifndef CATCHER_H
#define CATCHER_H

#include <queue>
#include "Agent.h"

class Catcher : public Agent
{
  std::queue<Point2D> q;
  std::vector<bool> visited;
  bool solutionfound;

public:
  explicit Catcher() : Agent(){};
  Point2D Move(World*) override;

  int HowManyValidNeighbors(World* world, Point2D point);
};

#endif  // CATCHER_H
