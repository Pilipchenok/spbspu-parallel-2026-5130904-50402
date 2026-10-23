#ifndef COMMANDS_HPP
#define COMMANDS_HPP
#include <iostream>
#include <unordered_map>
#include <memory>
#include <string>
#include <circle.hpp>



namespace lavrentev
{
  using set_map = std::unordered_map<std::string, std::vector<std::shared_ptr<lavrentev::Circle>>>;
  using circle_data = std::unordered_map<std::string, std::shared_ptr<lavrentev::Circle>>;

  void circle(std::istream &in, std::ostream &, set_map &, circle_data &ac);
  void set(std::istream &in, std::ostream &, set_map &sets, circle_data &ac);
  void show(std::istream &in, std::ostream &out, set_map &, circle_data &ac);
  void showset(std::istream &in, std::ostream &out, set_map &sets, circle_data &ac);
  void frame(std::istream &in, std::ostream &, set_map &sets, circle_data &ac);
  void frameset(std::istream &in, std::ostream &, set_map &sets, circle_data &ac);
  void spawn(std::istream &in, std::ostream &out, set_map &sets, circle_data &ac);
  void area_on(std::istream &in, std::ostream &out, set_map &sets, circle_data &ac);
  void status(std::istream &in, std::ostream &, set_map &sets, circle_data &ac);
  void wait(std::istream &in, std::ostream &, set_map &sets, circle_data &ac);
}

#endif
