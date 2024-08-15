class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0, ten = 0;  // Track the count of $5 and $10 bills
        
        for(int i = 0; i < bills.size(); i++) {
            if(bills[i] == 5) {
                five++;  // Customer pays with a $5 bill, no change needed
            } else if(bills[i] == 10) {
                if(five > 0) {  // Check if we have a $5 bill to give as change
                    five--;
                    ten++;
                } else {
                    return false;  // No $5 bill to give as change
                }
            } else if(bills[i] == 20) {
                if(ten > 0 && five > 0) {  // Prefer giving one $10 bill and one $5 bill as change
                    ten--;
                    five--;
                } else if(five >= 3) {  // Otherwise, give three $5 bills as change
                    five -= 3;
                } else {
                    return false;  // Not enough bills to give correct change
                }
            }
        }
        
        return true;  // Successfully gave change to all customers
    }
};
