#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of activities to be performed: ";
    cin >> n;

    int start[] = {1,3,0,5,8,5}, finish[] = {2,4,6,7,9,9};

    int i, j;

    cout << "Following activities are selected: " << endl;
    i = 0;
    cout << "(" << start[i] << ", " << finish[i] << "), ";
    
    for (j = 1; j < n; j++) {
        if (start[j] >= finish[i]) {
            cout << "(" << start[j] << ", " << finish[j] << "), ";
            i = j;
        }
    }
    return 0;
}
