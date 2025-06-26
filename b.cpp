#include <iostream>
#include <set>
using namespace std;
int main() {
    set<int> s;
    int x;
    cout << "enter 10 integers: ";
    for (int i = 0; i < 10; ++i) {
        cin >> x;
        s.insert(x);
    }
    cout << "set elements: ";
    for (int n : s) cout << n << " ";
    cout << endl;
    cout << "enter number to search: ";
    cin >> x;
    if (s.find(x) != s.end())
        cout << x << " is found.\n";
    else
        cout << x << " not found.\n";
    return 0;
}