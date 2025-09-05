#include <iostream>
#include <vector>
using namespace std;
int main() {
   int n;
   cin >> n; 
  vector<int> nums(n);
   for (int i = 0; i < n; i++) {
    cin >> nums[i];
    }
   vector<int> peaks;
    for (int i = 0; i < n; i++) {
       if (i == 0) {
         if (n > 1 && nums[i] > nums[i+1]) {
           peaks.push_back(i);
            }
 } else if (i == n-1) {
    if (nums[i] > nums[i-1]) {
        peaks.push_back(i);
         }
     } else {
       if (nums[i] > nums[i-1] && nums[i] > nums[i+1]) {
        peaks.push_back(i);
        }
     }
   }
    for (int idx : peaks) {
      cout << idx << " ";
    }
    cout << endl;
    return 0;
}
