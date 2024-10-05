class Solution {
public:
    vector<double> convertTemperature(double Celsius) {
        vector<double>res(2,0);
        res[0] = Celsius + 273.15;
        res[1] = Celsius * 1.80 + 32.00;
        return res;
    }
};
