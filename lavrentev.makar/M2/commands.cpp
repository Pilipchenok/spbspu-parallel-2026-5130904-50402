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
