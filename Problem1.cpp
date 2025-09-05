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
    bool isPalindrome = true;
    for (int i = 0; i < n / 2; i++) {
        if (nums[i] != nums[n - 1 - i]) {
         isPalindrome = false;
         break;
        }
    }
    if (isPalindrome) 
       cout << "YES" << endl;
    else 
       cout << "NO" << endl;
    return 0;
}
