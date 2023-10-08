#include "Catcher.h"
#include "World.h"

Point2D Catcher::Move(World* world) {
  auto size = world->getWorldSideSize();
  /*
  for (;;) {
    Point2D p = {Random::Range(-side, side), Random::Range(-side, side)};
    auto cat = world->getCat();
    if (cat.x != p.x && cat.y != p.y && !world->getContent(p)) return p;
  }*/

  visited.clear();
  visited.resize(size * size);

  auto pos = world->getCat();
  q.push(pos);

  Point2D current, neighbor;
  while (!q.empty())
  {
    current = q.front();

    if (world->catWinsOnSpace(current))
    {
      while (!q.empty())
      {
        q.pop();
      }
      //std::cout << current.x << "," << current.y << std::endl;
      return current;
    }

    visited[(current.y + size / 2) * (size) + current.x + size / 2] = true;

    neighbor = world->NW(current);
    if (world->isValidPosition(neighbor) && !world->getContent(neighbor) && !visited[(neighbor.y + size / 2) * (size) + neighbor.x + size / 2])
    {
      visited[(neighbor.y + size / 2) * (size) + neighbor.x + size / 2] = true;
      q.push(neighbor);
    }
    neighbor = world->NE(current);
    if (world->isValidPosition(neighbor) && !world->getContent(neighbor) && !visited[(neighbor.y + size / 2) * (size) + neighbor.x + size / 2])
    {
      visited[(neighbor.y + size / 2) * (size) + neighbor.x + size / 2] = true;
      q.push(neighbor);
    }
    neighbor = world->E(current);
    if (world->isValidPosition(neighbor) && !world->getContent(neighbor) && !visited[(neighbor.y + size / 2) * (size) + neighbor.x + size / 2])
    {
      visited[(neighbor.y + size / 2) * (size) + neighbor.x + size / 2] = true;
      q.push(neighbor);
    }
    neighbor = world->SE(current);
    if (world->isValidPosition(neighbor) && !world->getContent(neighbor) && !visited[(neighbor.y + size / 2) * (size) + neighbor.x + size / 2])
    {
      visited[(neighbor.y + size / 2) * (size) + neighbor.x + size / 2] = true;
      q.push(neighbor);
    }
    neighbor = world->SW(current);
    if (world->isValidPosition(neighbor) && !world->getContent(neighbor) && !visited[(neighbor.y + size / 2) * (size) + neighbor.x + size / 2])
    {
      visited[(neighbor.y + size / 2) * (size) + neighbor.x + size / 2] = true;
      q.push(neighbor);
    }
    neighbor = world->W(current);
    if (world->isValidPosition(neighbor) && !world->getContent(neighbor) && !visited[(neighbor.y + size / 2) * (size) + neighbor.x + size / 2])
    {
      visited[(neighbor.y + size / 2) * (size) + neighbor.x + size / 2] = true;
      q.push(neighbor);
    }

    q.pop();

  }

}
