#include <iostream>
#include <vector>

using namespace std;

int knapsack(int idx, int capacity, const vector<pair<int, int>> &items) {
    // Base case: If there are no more items or the capacity is 0, return 0
    if (idx == items.size() || capacity == 0) {
        return 0;
    }

    // If the current item's weight exceeds the remaining capacity, skip it
    if (items[idx].first > capacity) {
        return knapsack(idx + 1, capacity, items);
    }

    // Explore two possibilities: include the current item or skip it
    int includeItem = items[idx].second + knapsack(idx + 1, capacity - items[idx].first, items);
    int skipItem = knapsack(idx + 1, capacity, items);

    // Return the maximum value among the two possibilities
    return max(includeItem, skipItem);
}

int main() {
    int N, W;
    cin >> N >> W;

    vector<pair<int, int>> items(N);

    for (int i = 0; i < N; i++) {
        cin >> items[i].first >> items[i].second;
    }

    int result = knapsack(0, W, items);
    cout << result << endl;

    return 0;
}
