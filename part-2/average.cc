// Nghi Vu
// nghivu@csu.fullerton.edu
// @nghiv
// Partners: @bebopkenny

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least one number\n";
    return 1;
  }

  double sum{0.0};
  int count{0};

  for (int nums{1}; nums < arguments.size(); ++nums) {
    double num = std::stod(arguments.at(nums));
    sum += num;

    count++;
  }

  double average = sum / count;

  std::cout << "average = " << average << "\n";

  return 0;
}