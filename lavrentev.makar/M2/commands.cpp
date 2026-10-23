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
