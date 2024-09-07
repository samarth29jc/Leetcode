class Solution {
public:
    int divide(int dividend, int divisor) {
        // Handle overflow cases
        if (dividend == INT_MIN && divisor == -1) return INT_MAX;
        if (divisor == 0) return INT_MAX; // Avoid division by zero.

        long long ans = 0;
        long long cnt = 0;
        bool sign = true;

        // Determine the result sign
        if ((dividend > 0 && divisor < 0) || (dividend < 0 && divisor > 0)) {
            sign = false;
        }

        // Use long long to handle potential overflows during abs
        long long n = abs((long long)dividend);
        long long d = abs((long long)divisor);

        // Perform bit manipulation to calculate the quotient
        while (n >= d) {
            cnt = 0;
            while (n >= (d << (cnt + 1))) {
                cnt++;
            }
            ans += (1LL << cnt);
            n -= (d << cnt);
        }

        // Apply the sign to the result
        if (!sign) {
            ans = -ans;
        }

        // Ensure the result is within the 32-bit integer range
        if (ans >= INT_MAX) return INT_MAX;
        if (ans <= INT_MIN) return INT_MIN;

        return (int)ans;
    }
};
