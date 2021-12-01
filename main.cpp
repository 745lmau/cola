#include <iostream>
#include "cola.h"

using namespace std;

int main(){

	Cola<int>cola;

    cola.push(-1);
    cola.push(0);
    cola.push(1);
    cola.push(2);
    cola.push(3);

    cout << *cola.front() << endl;
    cout << *cola.back() << endl;

    cola.pop();

    cout << cola.size() << endl;

    return 0;
}
