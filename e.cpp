#include <iostream>
#include <queue>
using namespace std;
int main() {
    queue<string> q;
    string name;
    cout << "Enter 5 names: ";
    for (int i = 0; i < 5; ++i) {
        cin >> name;
        q.push(name);
    }
    while (!q.empty()) {
        cout << "Now serving: " << q.front() << endl;
        q.pop();
    }
    cout << "Queue is empty." << endl;
    return 0;
}