#include <vector>

// returns the index of the element that is equal or larger than target
int lower_bound(const std::vector<int>& arr, const int target) {

    int sz = static_cast<int>(arr.size());
    int lo = 0;
    int hi = sz;

    while (lo < hi) {
        int mid = lo + (hi - lo)/2;

        if (target <= arr[mid]) {
            // hi set to mid so we dont lose element if matches target
            hi = mid;
        } else {
            lo = mid + 1;
        }
    }

    if (lo < sz && arr[lo] < target) {
        lo++;
    }

    return lo;
}
