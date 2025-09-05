#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, x;
   cin >> n;
   vector<int> nums(n);
    for (int i = 0; i < n; i++) {
    cin >> nums[i];
    }
    cin >> x;
    int index = -1;
    for (int i = 0; i < n; i++) {
      if (nums[i] == x) {
          index = i;
         break;
        }
    }
    cout << index << endl;
    return 0;
}
