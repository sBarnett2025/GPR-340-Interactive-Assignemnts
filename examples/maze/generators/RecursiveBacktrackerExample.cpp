#include "../World.h"
#include "Random.h"
#include "RecursiveBacktrackerExample.h"
#include <climits>
bool RecursiveBacktrackerExample::Step(World* w) {
  bool value = false;

  Point2D current = stack.front();

  std::vector<Point2D> neighbors = getVisitables(w, current);

  if (neighbors.empty())
  {
    stack.pop_back();
  }
  else
  {
    // mark top cell as visited
    visited[current.x][current.y] = true;

    // list visitable neighbors
    std::vector<Point2D> neighbors;
    if (w->GetNorth(Point2D(current.x, current.y)))
    {
      neighbors.push_back(Point2D(current.x, current.y + 1));
    }
    if (w->GetSouth(Point2D(current.x, current.y)))
    {
      neighbors.push_back(Point2D(current.x, current.y - 1));
    }
    if (w->GetEast(Point2D(current.x, current.y)))
    {
      neighbors.push_back(Point2D(current.x + 1, current.y));
    }
    if (w->GetWest(Point2D(current.x, current.y)))
    {
      neighbors.push_back(Point2D(current.x - 1, current.y));
    }

    // choose a neighbor
    std::vector<int> rands;
    int largest = 0;
    for (int i = 0; i < neighbors.size(); i++)
    {
      rands[i] = w->GetRand();
    }
    for (int i = 1; i < rands.size(); i++)
    {
      if (rands[i] > rands[i-1])
      {
        largest = i;
      }
      else
      {
        largest = i-1;
      }
    }
    Point2D chosen = neighbors[largest];

    /*
     *
     * break wall
     * 4 up
     * horizontals[limits.x*point.y+point.x] = false;
     *
     *
     *
     */

    // remove wall between current and chosen neighbor


    // add neighbor


  }





  return value;
}

void RecursiveBacktrackerExample::Clear(World* world) {
  visited.clear();
  stack.clear();
  auto sideOver2 = world->GetSize() / 2;

  for (int i = -sideOver2; i <= sideOver2; i++) {
    for (int j = -sideOver2; j <= sideOver2; j++) {
      visited[i][j] = false;
    }
  }
}
Point2D RecursiveBacktrackerExample::randomStartPoint(World* world) {
  auto sideOver2 = world->GetSize() / 2;

  // todo: change this if you want
  for (int y = -sideOver2; y <= sideOver2; y++)
    for (int x = -sideOver2; x <= sideOver2; x++)
      if (!visited[y][x]) return {x, y};
  return {INT_MAX, INT_MAX};
}

std::vector<Point2D> RecursiveBacktrackerExample::getVisitables(World* w, const Point2D& p) {
  auto sideOver2 = w->GetSize() / 2;
  std::vector<Point2D> visitables;

  return visitables;
}
