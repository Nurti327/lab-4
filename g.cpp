#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<int> v;
    for (int i = 1; i <= 20; ++i) v.push_back(i);
    reverse(v.begin(), v.end());
    cout << "reversed: ";
    for (int x : v) cout << x << " ";
    cout << endl;
    int even_count = count_if(v.begin(), v.end(), [](int x){ return x % 2 == 0; });
    cout << "even numbers: " << even_count << endl;
    v.erase(remove_if(v.begin(), v.end(), [](int x){ return x % 3 == 0; }), v.end());
    cout << "after removing divisible by 3: ";
    for (int x:v) cout << x << " ";
    cout << endl;
    return 0;
}