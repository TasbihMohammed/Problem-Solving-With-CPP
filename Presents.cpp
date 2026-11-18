#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans[101];
    for (int i = 1; i <= n; i++) {
        int p;
        cin >> p;
        ans[p] = i;
    }
    for (int i = 1; i <= n; i++)
        cout << ans[i] << " ";
    return 0;
}