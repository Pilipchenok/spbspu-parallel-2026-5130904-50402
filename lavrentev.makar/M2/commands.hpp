#ifndef COMMANDS_HPP
#define COMMANDS_HPP
#include <iostream>
#include <unordered_map>
#include <memory>
#include <string>
#include <circle.hpp>



namespace lavrentev
{
  using circle_map = std::unordered_map<std::string, std::shared_ptr<lavrentev::Circle>>;
  using circle_vector = std::vector<std::shared_ptr<lavrentev::Circle>>;

  void circle(std::istream &in, std::ostream &, circle_map &db, circle_vector &vec);
  void set(std::istream &in, std::ostream &, circle_map &db, circle_vector &vec);
  void show(std::istream &in, std::ostream &out, circle_map &db, circle_vector &vec);
  void showset(std::istream &in, std::ostream &, circle_map &db, circle_vector &vec);
  void frame(std::istream &in, std::ostream &, circle_map &db, circle_vector &vec);
  void frameset(std::istream &in, std::ostream &, circle_map &db, circle_vector &vec);
  void spawn(std::istream &in, std::ostream &out, circle_map &db, circle_vector &vec);
  void area_on(std::istream &in, std::ostream &out, circle_map &db, circle_vector &vec);
  void status(std::istream &in, std::ostream &, circle_map &db, circle_vector &vec);
  void wait(std::istream &in, std::ostream &, circle_map &db, circle_vector &vec);
}

#endif
