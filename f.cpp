#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
double average(const vector<int>& v) {
    if (v.empty()) return 0;
    double sum = accumulate(v.begin(), v.end(), 0);
    return sum / v.size();
}
int main() {
    vector<int> v = {5, 10, 15, 20, 25};
    cout << average(v) << endl;
    return 0;
}