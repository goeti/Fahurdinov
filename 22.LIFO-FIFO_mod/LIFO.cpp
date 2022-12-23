#include "LIFO.h"
#include <iostream>
#include <vector>

using namespace std;

template <class T>
LIFO<T>::LIFO() {}

template <class T>
LIFO<T>::LIFO(vector<T> n) { w = n; }

template <class T>
void LIFO<T>::push(T a)
{
    w.push_back(a);
}

template <class T>
T LIFO<T>::pop()
{
    int e = w[w.size() - 1];
    w.pop_back();
    return e;
}

template <class T>
void LIFO<T>::print()
{
    for (int i = 0; i < w.size(); i++) {
        cout << w[i] << " ";
    }
    cout << endl;
}
