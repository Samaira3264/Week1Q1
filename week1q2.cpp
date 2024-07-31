#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "enter the no. of elements= ";
    cin >> n;

    vector<int> num(n);
    cout << "enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> num[i];
    }

    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum = sum + num[i];
    }

    double average = static_cast<double>(sum) / n;
    cout << "average= " << average << endl;

    return 0;
}
