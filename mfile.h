#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <typeinfo>
#include <sstream>

namespace m {
  template<typename T>
  void print(T arg) {
    std::cout << arg << std::endl;
  }

  template<typename T, typename T2>
  void print(T arg, T2 arg2) {
    std::cout << arg << " " << arg2 << std::endl;
  }

  template<typename T, typename T2, typename T3>
  void print(T arg, T2 arg2, T3 arg3) {
    std::cout << arg << " " << arg2 << " " << arg3 << std::endl;
  }

  template<typename T, typename T2, typename T3, typename T4>
  void print(T arg, T2 arg2, T3 arg3, T4 arg4) {
    std::cout << arg << " " << arg2 << " " << arg3 << " " << arg4 << std::endl;
  }

  template<typename T, typename T2, typename T3, typename T4, typename T5>
  void print(T arg, T2 arg2, T3 arg3, T4 arg4, T5 arg5) {
    std::cout << arg << " " << arg2 << " " << arg3 << " " << arg4 << " "
      << arg5 << std::endl;
  }

  template<typename T>
  void print(const T &arr, int n) {
    std::ostringstream out;
    for (int i = 0; i < n; i++) {
      out << arr[i] << ", ";
    }
    std::string array = out.str();
    array.pop_back();
    array.pop_back();
    std::cout << "[" << array << "]" << std::endl;
  }

  template<typename T>
  void print(const std::vector<T> &list) {
    std::ostringstream out;
    for (T i : list) {
      out << i << ", ";
    }

    std::string vector = out.str();
    vector.pop_back();
    vector.pop_back();
    std::cout << "[" << vector << "]" << std::endl;
  }

  template<typename T>
  void type(T var) {
    std::cout << typeid(var).name() << std::endl;
  }

  template<typename T, typename T2>
  void println(T arg, T2 arg2) {
    std::string str(arg);
    std::size_t pos = str.find("{}");
    std::string replace = str.substr(pos, 2);
    std::string before = str.substr(0, pos);
    std::string after = str.substr(pos + 2);
    std::cout << before << arg2 << after << std::endl;
  }

  template<typename T, typename T2, typename T3>
  void println(T arg, T2 arg2, T3 arg3) {
    std::string str(arg);
    std::size_t pos1 = str.find("{}");
    std::string replace = str.substr(pos1, 2);
    std::string before = str.substr(0, pos1);
    std::string tmp = str.substr(pos1 + 2);

    std::size_t pos2 = tmp.find("{}");
    std::string replace2 = tmp.substr(pos2, 2);
    std::string after = tmp.substr(pos2 + 2);
    std::string middle = tmp.substr(0, pos2);

    std::cout << before << arg2 << middle << arg3 << after << std::endl;
  }

  template<typename T, typename T2>
  void print(const std::map<T, T2> &dict) {
    std::ostringstream out;
    for (auto it = dict.begin(); it != dict.end(); it++) {
      out << it->first << ":" << it->second << ", ";
    }

    std::string map = out.str();
    map.pop_back();
    map.pop_back();
    std::cout << "{" << map << "}" << std::endl;
  }
}
