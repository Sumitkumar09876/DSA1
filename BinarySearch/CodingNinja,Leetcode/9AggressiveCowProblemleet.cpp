#include<bits/stdc++.h>
using namespace std;

bool canPlaceCows(int stalls[], int n, int c, int min_sep) {
    int last_cow = stalls[0];
    int cnt = 1;
    for(int i=1; i<n; i++) {
        if(stalls[i] - last_cow >= min_sep) {
            last_cow = stalls[i];
            cnt++;
            if(cnt == c) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int stalls[] = {1, 2, 4, 8, 9};
    int n = 5; // Number of stalls
    int c = 3; // Number of cows

    // Sort the stall positions
    sort(stalls, stalls+n);

    // Binary Search
    int start = 0;
    int end = stalls[n-1] - stalls[0];

    int ans = 0;
    while(start <= end) {
        int mid = start + (end-start)/2;
        if(canPlaceCows(stalls, n, c, mid)) {
            ans = mid;
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    cout << "The largest minimum distance is: " << ans << endl;

    return 0;
}