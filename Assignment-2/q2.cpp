#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arrival[] = {900, 910, 920, 1100, 1120};
    int departure[] = {940, 1200, 950, 1130, 1140};

    int n = sizeof(arrival) / sizeof(arrival[0]);

    sort(arrival, arrival + n);
    sort(departure, departure + n);

    int platforms = 1, maxPlatforms = 1;
    int i = 1, j = 0;

    while (i < n && j < n) {
        if (arrival[i] <= departure[j]) {
            platforms++;
            maxPlatforms = max(maxPlatforms, platforms);
            i++;
        } else {
            platforms--;
            j++;
        }
    }

    cout << "Minimum number of platforms required: " << maxPlatforms << endl;

    return 0;
}
