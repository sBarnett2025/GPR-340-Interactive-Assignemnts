//
// Created by atolstenko on 2/9/2023.
//

#include "HexagonGameOfLife.h"
void HexagonGameOfLife::Step(World& world)
{
  int neighbors  = 0;
  bool alive = false;
  for (int y = 0; y < world.SideSize(); y++)
  {
    for (int x = 0; x < world.SideSize(); x++)
    {
      alive = world.Get({x, y});
      neighbors = CountNeighbors(world, {x, y});

      // underpopulation
      if (neighbors <= 1 && alive)
      {
        alive = false;
      }

      // overpopulation
      if (neighbors >= 3 && alive)
      {
        alive = false;
      }

      // population
      if (neighbors == 2 && !alive)
      {
        alive = true;
      }

      world.SetNext({x, y}, alive);

    }
  }

}

int HexagonGameOfLife::CountNeighbors(World& world, Point2D point)
{
  int count = 0;

  if (point.y % 2)
  {
    count += world.Get({point.x + 0, point.y - 1}) ? 1 : 0;
    count += world.Get({point.x + 1, point.y - 1}) ? 1 : 0;

    count += world.Get({point.x - 1, point.y + 0}) ? 1 : 0;
    count += world.Get({point.x + 1, point.y + 0}) ? 1 : 0;

    count += world.Get({point.x + 0, point.y + 1}) ? 1 : 0;
    count += world.Get({point.x + 1, point.y + 1}) ? 1 : 0;
  }
  else
  {
    count += world.Get({point.x - 1, point.y - 1}) ? 1 : 0;
    count += world.Get({point.x + 0, point.y - 1}) ? 1 : 0;

    count += world.Get({point.x - 1, point.y + 0}) ? 1 : 0;
    count += world.Get({point.x + 1, point.y + 0}) ? 1 : 0;

    count += world.Get({point.x - 1, point.y + 1}) ? 1 : 0;
    count += world.Get({point.x + 0, point.y + 1}) ? 1 : 0;
  }



  return count;
}
