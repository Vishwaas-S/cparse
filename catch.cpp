#define CATCH_CONFIG_RUNNER
#include "catch.hpp"

// Defined test-shunting-yard.cpp gg
void PREPARE_ENVIRONMENT();

int main(int argc, char** argv) {
  PREPARE_ENVIRONMENT();
  return Catch::Session().run(argc, argv);
}
