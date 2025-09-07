#include "vex.h"

#include <cmath>

vex::competition comp;

/**
 * Entry point to the program. No code should be placed here;
 * instead use competition/opcontrol.cpp and
 * competition/autonomous.cpp
 */
int main() {
  vex::brain brain = vex::brain();

  // auto const ints = {0, 1, 2, 3, 4, 5};
  // auto even = [](int i) { return 0 == i % 2; };
  // auto square = [](int i) { return i * i; };
  //
  // for (int i : ints | std::views::filter(even) | std::views::transform(square))
  //   brain.Screen.print("%d ", i);

  brain.Screen.print("aweoifj\n");

  double x = 2.0;
  double cosx = std::cos(x);

  brain.Screen.print("helloa %f\n", cosx);
}
