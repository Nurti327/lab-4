#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
using namespace std;
int main() {
    srand(time(0));
    vector<int> v;
    for (int i = 0; i < 10; ++i) {
        v.push_back(rand() % 100 + 1);
    }
    cout << "original vector: ";
    for (int n : v) cout << n << " ";
    cout << endl;
    sort(v.begin(), v.end());
    cout << "sorted vector: ";
    for (int n : v) cout << n << " ";
    cout << endl;
    auto min_it = min_element(v.begin(), v.end());
    auto max_it = max_element(v.begin(), v.end());
    cout << "min: " << *min_it << ", max: " << *max_it << endl;
    v.erase(unique(v.begin(), v.end()), v.end());
    cout << "After removing duplicates: ";
    for (int n : v) cout << n << " ";
    cout << endl;
    return 0;
}