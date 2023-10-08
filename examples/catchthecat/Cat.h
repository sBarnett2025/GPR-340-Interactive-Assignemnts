#ifndef CAT_H
#define CAT_H

#include <queue>
#include <unordered_map>
#include "Agent.h"

struct tile {
  Point2D pos;
  int value;
};

class Cat : public Agent
{
private:
  std::queue<Point2D> q;
  std::vector<bool> visited;

  // [current][camefrom]
  std::unordered_map<Point2D, Point2D> cameFrom;
  // [current][value]
  std::unordered_map<Point2D, int> distanceToEdge;

  void UpdateMaps(World* w, Point2D start, Point2D current, Point2D neighbor);
  int HowManyValidNeighbors(World* world, Point2D point);

public:
  explicit Cat() : Agent(){};
  Point2D Move(World*) override;
};

#endif  // CAT_H
