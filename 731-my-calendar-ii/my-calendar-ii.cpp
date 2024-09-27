#include <vector>
#include <algorithm>

class MyCalendarTwo {
public:
    MyCalendarTwo() {}

    bool book(int start, int end) {
        if (!intersection(double_booked, start, end).empty()) {
            return false;
        }

        std::vector<int> inter = intersection(single_booked, start, end);
        if (!inter.empty()) {
            for (size_t i = 0; i < inter.size(); i += 2) {
                add(double_booked, inter[i], inter[i + 1]);
            }
        }

        add(single_booked, start, end);
        return true;
    }

private:
    std::vector<int> single_booked;
    std::vector<int> double_booked;

    std::vector<int> intersection(const std::vector<int>& intervals, int s, int e) {
        auto l = std::lower_bound(intervals.begin(), intervals.end(), s);
        auto r = std::upper_bound(intervals.begin(), intervals.end(), e);

        std::vector<int> intersection;
        if ((l - intervals.begin()) % 2) {
            if (*l != s) {
                intersection.push_back(s);
            } else {
                ++l;
            }
        }

        intersection.insert(intersection.end(), l, r);

        if ((r - intervals.begin()) % 2) {
            if (*(r - 1) != e) {
                intersection.push_back(e);
            } else {
                intersection.pop_back();
            }
        }

        return intersection;
    }

    void add(std::vector<int>& intervals, int s, int e) {
        auto l = std::lower_bound(intervals.begin(), intervals.end(), s);
        auto r = std::upper_bound(intervals.begin(), intervals.end(), e);

        std::vector<int> new_intervals;
        if ((l - intervals.begin()) % 2 == 0) {
            new_intervals.push_back(s);
        }

        if ((r - intervals.begin()) % 2 == 0) {
            new_intervals.push_back(e);
        }

        intervals.erase(l, r);
        intervals.insert(l, new_intervals.begin(), new_intervals.end());
    }
};