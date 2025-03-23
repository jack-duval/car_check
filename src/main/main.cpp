#include <iostream>

#include "app.h"

int main() {
  std::cout << "Running app!" << std::endl;

  App app(true);

  app.run();
}
