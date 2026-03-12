#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<int> set;
    for (int i = 10; i > 0; i--)
    {
        int n;
        cin >> n;
        set.insert(n % 42);
    }
    cout << set.size() << '\n';
    return 0;
}