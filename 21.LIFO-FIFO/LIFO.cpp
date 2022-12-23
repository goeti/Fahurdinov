#include "LIFO.h"
#include <iostream>
#include <vector>

using namespace std;

LIFO::LIFO() {}

LIFO::LIFO(vector<int> n) { w = n; }

void LIFO::push(int a)
{
    w.push_back(a);
}

int LIFO::pop()
{
    int e = w[w.size() - 1];
    w.pop_back();
    return e;
}

void LIFO::print()
{
    for (int i = 0; i < w.size(); i++) {
        cout << w[i] << " ";
    }
    cout << endl;
}
