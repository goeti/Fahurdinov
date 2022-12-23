#include "FIFO.h"
#include <iostream>
#include <vector>

using namespace std;

template <class T>
FIFO<T>::FIFO(){}

template <class T>
FIFO<T>::FIFO(vector<T> n) { w = n; }

template <class T>
void FIFO<T>::push(T a)
{
    w.push_back(a);
}

template <class T>
T FIFO<T>::pop()
{
    int e = w[0];
    w.erase(w.begin());
    return e;
}

template <class T>
void FIFO<T>::print()
{
    for (int i = 0; i < w.size(); i++) {
        cout << w[i] << " ";
    }
    cout << endl;
}
