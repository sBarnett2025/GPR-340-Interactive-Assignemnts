#include "JohnConway.h"

// Reference: https://playgameoflife.com/info
void JohnConway::Step(World& world)
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
      if (neighbors >= 4 && alive)
      {
        alive = false;
      }

      // population
      if (neighbors == 3 && !alive)
      {
        alive = true;
      }

      world.SetNext({x, y}, alive);

    }
  }

}

int JohnConway::CountNeighbors(World& world, Point2D point)
{
  int count = 0;

  for (int y = -1; y <= 1; y++)
  {
    for (int x = -1; x <= 1; x++)
    {
      if (x == 0 && y == 0)
      {

      }
      else
      {
        count += world.Get({point.x + x, point.y + y}) ? 1 : 0;
      }
    }
  }

  return count;
}
