#include <iostream>
#include <string>
#include <circle.hpp>
#include "commands.hpp"

void circle(std::istream &in, std::ostream &, lavrentev::set_map &, lavrentev::circle_data &ac)
{
  std::string name;
  int radius, x, y;
  in >> name >> radius >> x >> y;
  lavrentev::Circle circle(name, radius, x, y);
  auto circle_ptr = std::make_shared<lavrentev::Circle>(circle);
  ac[name] = circle_ptr;
}

void set(std::istream &in, std::ostream &, lavrentev::set_map &sets, lavrentev::circle_data &ac)
{
  std::string name;
  in >> name;
  if (sets.find(name) != sets.end())
  {
    throw std::logic_error("Set already exists");
  }
  size_t set_size;
  in >> set_size;
  for (size_t i = 0; i < set_size; ++i)
  {
    std::string shape_name;
    in >> shape_name;
    if (ac.find(shape_name) == ac.end())
    {
      throw std::logic_error("Circle does not exist");
    }
    sets[name].push_back(ac[shape_name]);
  }
}

void show(std::istream &in, std::ostream &out, lavrentev::set_map &, lavrentev::circle_data &ac)
{
  std::string shape_name;
  in >> shape_name;
  if (ac.find(shape_name) == ac.end())
  {
    throw std::logic_error("Circle does not exist");
  }
  out << ac[shape_name]->getRadius() << " (" << ac[shape_name]->getX() << " " << ac[shape_name]->getY() << ")\n";
}

void showset(std::istream &in, std::ostream &out, lavrentev::set_map &sets, lavrentev::circle_data &ac)
{
  std::string set_name;
  in >> set_name;
  if (sets.find(set_name) == sets.end())
  {
    throw std::logic_error("Set does not exist");
  }
  for (const auto &circle_ptr : sets[set_name])
  {
    out << circle_ptr->getRadius() << " (" << circle_ptr->getX() << " " << circle_ptr->getY() << ")\n";
  }
}
