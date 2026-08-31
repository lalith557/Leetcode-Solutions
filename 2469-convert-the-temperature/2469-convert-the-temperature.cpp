class Solution {
public:
    vector<double> convertTemperature(double cel) {
        double kel=cel+273.15;
        double fah=cel*1.80+32.00;
        return {kel,fah};
    }
};