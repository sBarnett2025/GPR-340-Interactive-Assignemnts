#include "Cat.h"
#include "World.h"
#include <stdexcept>

Point2D Cat::Move(World* world)
{
  auto sideSize = world->getWorldSideSize();
  visited.clear();
  visited.resize(sideSize * sideSize);
    cameFrom.clear();
    distanceToEdge.clear();
  bool firstLoop = true;
  std::vector<Point2D> neighbors;

  Point2D current, tile;

  auto pos = world->getCat();
  q.push(pos);

  while (!q.empty())
  {
    current = q.front();

    visited[(current.y + sideSize / 2) * (sideSize) + current.x + sideSize / 2] = true;

    tile = world->NW(current);
    if (world->isValidPosition(tile) && !world->getContent(tile) && !visited[(tile.y + sideSize / 2) * (sideSize) + tile.x + sideSize / 2])
    {
      UpdateMaps(world, pos, current, tile);
      if (firstLoop)
      {
        neighbors.push_back(tile);
      }
    }
    tile = world->NE(current);
    if (world->isValidPosition(tile) && !world->getContent(tile) && !visited[(tile.y + sideSize / 2) * (sideSize) + tile.x + sideSize / 2])
    {
      UpdateMaps(world, pos, current, tile);
      if (firstLoop)
      {
        neighbors.push_back(tile);
      }
    }
    tile = world->E(current);
    if (world->isValidPosition(tile) && !world->getContent(tile) && !visited[(tile.y + sideSize / 2) * (sideSize) + tile.x + sideSize / 2])
    {
      UpdateMaps(world, pos, current, tile);
      if (firstLoop)
      {
        neighbors.push_back(tile);
      }
    }
    tile = world->SE(current);
    if (world->isValidPosition(tile) && !world->getContent(tile) && !visited[(tile.y + sideSize / 2) * (sideSize) + tile.x + sideSize / 2])
    {
      UpdateMaps(world, pos, current, tile);
      if (firstLoop)
      {
        neighbors.push_back(tile);
      }
    }
    tile = world->SW(current);
    if (world->isValidPosition(tile) && !world->getContent(tile) && !visited[(tile.y + sideSize / 2) * (sideSize) + tile.x + sideSize / 2])
    {
      UpdateMaps(world, pos, current, tile);
      if (firstLoop)
      {
        neighbors.push_back(tile);
      }
    }
    tile = world->W(current);
    if (world->isValidPosition(tile) && !world->getContent(tile) && !visited[(tile.y + sideSize / 2) * (sideSize) + tile.x + sideSize / 2])
    {
      UpdateMaps(world, pos, current, tile);
      if (firstLoop)
      {
        neighbors.push_back(tile);
      }
    }

    q.pop();
    firstLoop = false;
  }

  Point2D bestPoint = Point2D(0,0);
  int lowestValue = 999999;
  for (int i = 0; i < neighbors.size(); i++)
  {
    std::cout << neighbors[i].x << "," << neighbors[i].y << std::endl;
    if (distanceToEdge[neighbors[i]] < lowestValue)
    {
      bestPoint = neighbors[i];
      lowestValue = distanceToEdge[bestPoint];
    }
  }
  std::cout << "------------------" << std::endl;
  //std::cout << lowestValue << std::endl;
  //std::cout << bestPoint.x << "," << bestPoint.y << std::endl;
  return bestPoint;
}


void Cat::UpdateMaps(World* world, Point2D start, Point2D current, Point2D neighbor)
{
  visited[(neighbor.y + world->getWorldSideSize() / 2) * (world->getWorldSideSize()) + neighbor.x + world->getWorldSideSize() / 2] = true;

  cameFrom.insert({neighbor, current});
  distanceToEdge.insert({neighbor, 9000});
  Point2D from;
  int counter = 0;
  if (world->catWinsOnSpace(neighbor))
  {
    from = cameFrom.find(neighbor)->second;
    while (from != start)
    {
      counter++;
      if (counter < distanceToEdge.find(from)->second)
      {
        distanceToEdge.find(from)->second = counter;
      }
      from = cameFrom.find(from)->second;
    }
  }
  else
  {
    /*
    from = cameFrom.find(neighbor)->second;
    while (from != start)
    {
      distanceToEdge.find(from)->second += 1;
      from = cameFrom.find(from)->second;
    }*/

    q.push(neighbor);
  }
}

int Cat::HowManyValidNeighbors(World* world, Point2D point)
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