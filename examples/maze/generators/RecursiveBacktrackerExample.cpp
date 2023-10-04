#include "../World.h"
#include "Random.h"
#include "RecursiveBacktrackerExample.h"
#include <climits>
bool RecursiveBacktrackerExample::Step(World* w) {

  if (stack.empty())
  {
    stack.push_back(randomStartPoint(w));
  }
  Point2D current = stack.back();

  std::vector<Point2D> neighbors = getVisitables(w, current);

  if (neighbors.empty())
  {
    stack.pop_back();
    w->SetNodeColor(current, Color::Black);
  }
  else
  {
    // mark top cell as visited
    visited[current.x][current.y] = true;

    // choose a neighbor
    Point2D chosen;
    if (neighbors.size() == 1)
    {
      chosen = neighbors[0];
    }
    else
    {
      int randomNum = w->GetRand();
      int index = randomNum % neighbors.size();

      chosen = neighbors[index];
    }

    // remove wall between current and chosen neighbor

    //std::cout << w->horizontals[w->GetSize()*current.y+current.x] << std::endl;
    int limit = w->GetSize()+1;
    int half = limit/2;
    std::cout << current.x << "," << current.y << std::endl;
    if (chosen.y == current.y-1) // North
    {
      std::cout << "north" << std::endl;
      w->horizontals[limit*(current.y+half)+(current.x+half)] = false;
      w->SetNorth(current, false);
    }
    else if (chosen.x == current.x+1) // East
    {
      std::cout << "east" << std::endl;
      w->verticals[limit*(current.y+half)+(current.x+half+1)] = false;
      w->SetEast(current, false);
    }
    else if (chosen.y == current.y+1) // South
    {
      std::cout << "south" << std::endl;
      w->horizontals[limit*(current.y+half+1)+(current.x+half)] = false;
      w->SetSouth(current, false);
    }
    else if (chosen.x == current.x-1)  // West
    {
      std::cout << "west" << std::endl;
      w->verticals[limit*(current.y+half)+(current.x+half)] = false;
      w->SetWest(current, false);
    }
    else
    {
      std::cout << ":2" << std::endl;
    }
    w->SetNodeColor(current, Color::Maroon);

    // add neighbor
    stack.push_back(chosen);

  }

  if (stack.empty())
  {
    return false;
  }
  else
  {
    return true;
  }

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

  if (!w->PointValid(Point2D(p.x,p.y-1))) {}
  else if (w->GetNorth(p) && !visited[p.x][p.y-1])
  {
    visitables.push_back(Point2D(p.x, p.y-1));
  }
  if (!w->PointValid(Point2D(p.x+1,p.y))) {}
  else if (w->GetEast(p) && !visited[p.x+1][p.y])
  {
    visitables.push_back(Point2D(p.x+1, p.y));
  }
  if (!w->PointValid(Point2D(p.x,p.y+1))) {}
  else if (w->GetSouth(p) && !visited[p.x][p.y+1])
  {
    visitables.push_back(Point2D(p.x, p.y+1));
  }
  if (!w->PointValid(Point2D(p.x-1,p.y))) {}
  else if (w->GetWest(p) && !visited[p.x-1][p.y])
  {
    visitables.push_back(Point2D(p.x-1, p.y));
  }

  return visitables;
}
