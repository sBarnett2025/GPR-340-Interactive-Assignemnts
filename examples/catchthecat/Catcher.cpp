#include "Catcher.h"
#include "World.h"

Point2D Catcher::Move(World* world)
{
  solutionfound = false;
  bool firstLoop = true;
  auto size = world->getWorldSideSize();
  visited.clear();
  visited.resize(size * size);

  std::vector<Point2D> neighbors;

  auto pos = world->getCat();
  Point2D bestPoint;
  q.push(pos);

  Point2D current, neighbor;
  while (!q.empty())
  {
    current = q.front();

    if (world->catWinsOnSpace(current))
    {
      solutionfound = true;
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
      if (firstLoop)
      {
        neighbors.push_back(neighbor);
      }
    }
    neighbor = world->NE(current);
    if (world->isValidPosition(neighbor) && !world->getContent(neighbor) && !visited[(neighbor.y + size / 2) * (size) + neighbor.x + size / 2])
    {
      visited[(neighbor.y + size / 2) * (size) + neighbor.x + size / 2] = true;
      q.push(neighbor);
      if (firstLoop)
      {
        neighbors.push_back(neighbor);
      }
    }
    neighbor = world->E(current);
    if (world->isValidPosition(neighbor) && !world->getContent(neighbor) && !visited[(neighbor.y + size / 2) * (size) + neighbor.x + size / 2])
    {
      visited[(neighbor.y + size / 2) * (size) + neighbor.x + size / 2] = true;
      q.push(neighbor);
      if (firstLoop)
      {
        neighbors.push_back(neighbor);
      }
    }
    neighbor = world->SE(current);
    if (world->isValidPosition(neighbor) && !world->getContent(neighbor) && !visited[(neighbor.y + size / 2) * (size) + neighbor.x + size / 2])
    {
      visited[(neighbor.y + size / 2) * (size) + neighbor.x + size / 2] = true;
      q.push(neighbor);
      if (firstLoop)
      {
        neighbors.push_back(neighbor);
      }
    }
    neighbor = world->SW(current);
    if (world->isValidPosition(neighbor) && !world->getContent(neighbor) && !visited[(neighbor.y + size / 2) * (size) + neighbor.x + size / 2])
    {
      visited[(neighbor.y + size / 2) * (size) + neighbor.x + size / 2] = true;
      q.push(neighbor);
      if (firstLoop)
      {
        neighbors.push_back(neighbor);
      }
    }
    neighbor = world->W(current);
    if (world->isValidPosition(neighbor) && !world->getContent(neighbor) && !visited[(neighbor.y + size / 2) * (size) + neighbor.x + size / 2])
    {
      visited[(neighbor.y + size / 2) * (size) + neighbor.x + size / 2] = true;
      q.push(neighbor);
      if (firstLoop)
      {
        neighbors.push_back(neighbor);
      }
    }

    q.pop();
    firstLoop = false;
  }

  int highestValue = 0;
  if (!solutionfound)
  {
    for (int i = 0; i < neighbors.size(); i++)
    {
      int neighborCount = HowManyValidNeighbors(world, neighbors[i]);
      if (neighborCount > highestValue)
      {
        highestValue = neighborCount;
        bestPoint = neighbors[i];
      }
    }
  }

  return bestPoint;
}

int Catcher::HowManyValidNeighbors(World* world, Point2D point)
{
  int counter = 0;
  Point2D tile;

  tile = world->NW(point);
  if (world->isValidPosition(tile) && !world->getContent(tile))
  {
    counter++;
  }
  tile = world->NE(point);
  if (world->isValidPosition(tile) && !world->getContent(tile))
  {
    counter++;
  }
  tile = world->E(point);
  if (world->isValidPosition(tile) && !world->getContent(tile))
  {
    counter++;
  }
  tile = world->SE(point);
  if (world->isValidPosition(tile) && !world->getContent(tile))
  {
    counter++;
  }
  tile = world->SW(point);
  if (world->isValidPosition(tile) && !world->getContent(tile))
  {
    counter++;
  }
  tile = world->W(point);
  if (world->isValidPosition(tile) && !world->getContent(tile))
  {
    counter++;
  }

  return counter;
}