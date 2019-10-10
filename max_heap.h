//
// Created by Ivan Mamani on 10/10/2019.
//

#ifndef CS1103_PC2_201902_MAX_HEAP_H
#define CS1103_PC2_201902_MAX_HEAP_H

#include <iostream>
#include <vector>
#include <deque>
#include "heap.h"
#include <iterator>


using namespace std;

template <typename T>
class max_heap{
private:
    vector<T> h;
public:
    max_heap(){}

    T get_max () {
        return *max_element(h.begin(), h.end());
    }

    void insert (T i) {
        std::vector<int>::iterator it;
        return  h.insert (i);

    }
    void insert (max_heap<T> heap, T i, T i1) {
        std::vector<int>::iterator it;
        return  h.insert (it,i,i1);

    }


    friend ostream& operator<<(ostream& out, const vector<T> v){
    out << "[";
    for (int i = 0; i < v.size(); ++i) {
        out << v[i];
        if (i != v.size() - 1)
            out << ", ";
    }
    out << "]\n";
    return out;
    }


    friend istream& operator >> (istream& in, vector<T>& v){
        std::vector<int>::iterator it;
        in >> v.insert (it);
        return in;
    }
};



#endif //CS1103_PC2_201902_MAX_HEAP_H
