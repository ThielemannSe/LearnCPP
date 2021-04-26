#include <iostream>
#include "vector2d.h"

using namespace std;

int main()
{
    Vector2D v1;
    Vector2D v2(1, 2);
    Vector2D v3(6, 1);

    // Print vector to console
    cout << v1 << endl;
    cout << v2 << endl;

    cout << (v2 + v3) << endl;

    return 0;
}