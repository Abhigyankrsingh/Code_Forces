//https://codeforces.com/contest/1914/problem/B

//B. Preparing for the Contest

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> ans;
    for (int i = 0; i <= k; i++) {
        ans.push_back(i);
    }

    for (int i = n; i > k; i--) {
        ans.push_back(i);
    }

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << "\n";

    return 0;
}


