#include <iostream>
using namespace std;

bool isPossible(int x1, int v1, int x2, int v2)
{
    if(v2 < v1)
    {
        while(x1 <= x2)
        {
            if(x1 == x2)
                return true;
            x1 += v1;
            x2 += v2;
        }
    }
    return false;
}

int main()
{
    int x1, v1, x2, v2;
    bool possible;
    cin >> x1 >> v1 >> x2 >> v2;
    possible = isPossible(x1, v1, x2, v2);
    possible ? cout << "YES" : cout << "NO";
    return 0;
}
