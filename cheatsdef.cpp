#include "cheats.hpp"

ifstream iopen(string name)
{
    ifstream ifile(name);
    if(!ifile)
        throw runtime_exception("Input file \""+name+"\" not found");
    return ifile;
}
ofstream oopen(string name)
{
    ofstream ofile(name);
    if(!ofile)
        throw runtime_exception("Output file \""+name+"\" not found");
    return ofile;
}

template<typename T>
void getline(std::istream& f, std::vector<T>& v, size_t anz)
{
    T buf;
    v.clear();
    for(size_t i=0; i<anz; i++)
    {
        f >> buf;
        v.push_back(buf);
    }
}

template<typename T>
void getblock(std::istream& s, vector2d<T>& v, size_t X, size_t Y)
{
    std::vector<T> buf;
    v.clear();
    for(size_t i=0; i<Y; i++)
    {
        getline(s, buf, X);
        v.push_back(buf);
    }
}

template<typename T>
void outputline(std::ostream& o, const std::vector<T>& v, const char* fill, const char* end)
{
    for(T e : v)
        o << e << fill;
    o << end;
}
template<typename T>
void outputblock(std::ostream& o, const vector2d<T>& v, const char* fill, const char* end)
{
    for(std::vector<T> e : v)
    {
        outputline(o, e, fill, end);
    }
}

template<typename T>
T&  min(vector<T>& v)
{
    T _min = v.at(0);
    for(T& i : v)
        if(i < _min)
            _min = i;
    return _min;
}
template<typename T>
T&  max(vector<T>& v)
{
    T _max = v.at(0);
    for(T& i : v)
        if(i > _max)
            _max = i;
    return _max;
}