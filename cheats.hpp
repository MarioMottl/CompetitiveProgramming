#ifndef CHEATS_HPP_INCLUDED
#define CHEATS_HPP_INCLUDED

#undef __STRICT_ANSI__

/// Includes
#include <vector>
#include <algorithm>
#include <iostream>
#include <fstream>
#include <cmath>
#include <cstdint>
#include <exception>
#include <map>
#include <deque>
#include <ctime>

using namespace std;
using std::runtime_error;
using runtime_exception = runtime_error;
using uint = unsigned int;

template<typename T>
using vector2d = std::vector<std::vector<T>>;

//File Handling
ifstream iopen(string name);
ofstream oopen(string name);

// Vector Operations
template<typename T>    void getline(istream&, vector<T>& v, size_t anz);
template<typename T>    void getblock(istream&, vector2d<T>& v, size_t X, size_t Y);
template<typename T>    void outputline(ostream&, const vector<T>& v, const char* fill = " ", const char* end = "\n");
template<typename T>    void outputblock(ostream&, const vector2d<T>& v, const char* fill = " ", const char* end = "\n");

template<typename T>    T&  min(vector<T>& v);
template<typename T>    T&  max(vector<T>& v);
#endif // CHEATS_HPP_INCLUDED
