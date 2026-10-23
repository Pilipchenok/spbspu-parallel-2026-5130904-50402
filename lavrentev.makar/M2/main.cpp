#include <iostream>
#include "commands.hpp"

namespace lavrentev
{
  using cmd_t = void (*)(
    std::istream &, std::ostream &,
    circle_map &,
    circle_vector &
  );
}

int main()
{

}
