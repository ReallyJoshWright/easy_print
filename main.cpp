#include "mfile.h"

using namespace m;

int main() {
  // simple print statements
  print("Hello World!");
  print('\n');

  char a = 'a';
  print(a);
  print('\n');

  // print out a map
  std::map<std::string, std::string> meal;
  meal["breakfast"] = "eggs";
  meal["lunch"] = "sandwich";
  meal["dinner"] = "spaghetti";
  print(meal);
  print('\n');

  std::map<std::string, int> num;
  num["one"] = 1;
  num["two"] = 2;
  num["three"] = 3;
  print(num);
  print('\n');

  // get the type of a variable
  int val = 5;
  double d = 34.2;
  std::string name = "Harry";
  int arr[] = {1, 2, 3};
  type(val);
  type(d);
  type(name);
  type(arr);
  print('\n');

  // print vectors and arrays
  std::vector<int> list = {1, 2, 3, 4};
  print(list);
  print('\n');

  int arr2[] = {1, 2, 3, 4};
  int n = 4;
  print(arr2, n);
  print('\n');

  // printing string literals with variables
  double value = 24.234;
  println("The value is {}", value);
  print('\n');

  std::string first = "James";
  std::string last = "Bond";
  println("The name is {} {}", first, last);
  print('\n');
}
