class Solution {
public:
    double myPow(double x, int n) {
        long long power = n;

        if (power < 0) {
            x = 1 / x;
            power = -power;
        }

        if (power == 0)
            return 1;

        if (power % 2 == 0)
            return myPow(x * x, power / 2);

        return x * myPow(x * x, (power - 1) / 2);
    }
};