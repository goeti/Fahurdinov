#include "FIFO.h"
#include <iostream>
#include <vector>

using namespace std;

FIFO::FIFO(){}

FIFO::FIFO(vector<int> n) { w = n; }

void FIFO::push(int a)
{
    w.push_back(a);
}

int FIFO::pop()
{
    int e = w[0];
    w.erase(w.begin());
    return e;
}

void FIFO::print()
{
    for (int i = 0; i < w.size(); i++) {
        cout << w[i] << " ";
    }
    cout << endl;
}
