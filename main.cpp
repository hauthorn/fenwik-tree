#include <iostream>
#include <vector>
#include "FenwikArray.cpp";
#include "FenwikTree.cpp";

using namespace std;

int main() {
    std::vector<int> array{ 1, 7, 3, 0, 5, 8, 3, 2, 6, 2, 1, 1, 4, 5 };

    FenwikArray fenwikArray(array);
    cout << "FenwikArray test" << endl;
    cout << fenwikArray.prefix(4) << endl;
    cout << "update(3,2)" << endl;
    fenwikArray.update(3,2);
    cout << fenwikArray.prefix(4) << endl;


    array = { 1, 7, 3, 0, 5, 8, 3, 2, 6, 2, 1, 1, 4, 5 };
    FenwikTree fenwikTree(array);
    cout << "FenwikTree test" << endl;
    cout << fenwikTree.prefix(4) << endl;
    cout << "update(3,2)" << endl;
    fenwikTree.update(3,2);
    cout << fenwikTree.prefix(4) << endl;

    return 0;
}