class Solution {
public:
    int countTriples(int n) {
        int c = 0;
        for (int a = 1; a <= n; a++)
            for (int b = 1; b <= n; b++)
                for (int x = 1; x <= n; x++)
                    if (a * a + b * b == x * x)
                        c++;
        return c;
    }
};
