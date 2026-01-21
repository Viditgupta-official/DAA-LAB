#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int maxSubarraySum(vector<int> &arr) {

    int res = arr[0];           

    int maxEnding = arr[0];     

    for (int i = 1; i < arr.size(); i++) {

        maxEnding = max(arr[i], maxEnding + arr[i]);

        res = max(res, maxEnding);
    }
    return res;
}

int main() {
    vector<int> arr = {-2, -5, 6, -2, 1, 5, -6};
    cout << maxSubarraySum(arr); 
    return 0;
}
