#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
  cin >> n;
  vector<int> nums(n);
   long long sum = 0;
    for (int i = 0; i < n; i++) {
      cin >> nums[i];
        sum += nums[i];
    }
    cout << (sum / n) << endl;
    return 0;
}