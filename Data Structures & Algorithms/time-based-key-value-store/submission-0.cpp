class TimeMap {
public:
    unordered_map<string, vector<pair<int, string>>> m;

    TimeMap() {}

    void set(string key, string value, int timestamp) {
        m[key].push_back({timestamp, value});
    }

    string get(string key, int timestamp) {
        // if key doesn't exist
        if (m.find(key) == m.end()) {
            return "";
        }

        vector<pair<int, string>>& arr = m[key];

        int low = 0;
        int high = arr.size() - 1;

        string result = "";

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid].first == timestamp) {
                return arr[mid].second;
            }

            // possible answer
            if (arr[mid].first < timestamp) {
                result = arr[mid].second;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return result;
    }
};