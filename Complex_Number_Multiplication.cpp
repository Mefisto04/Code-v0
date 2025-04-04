class Solution {
public:
    string complexNumberMultiply(string num1, string num2) {
        // Math Formula - (a+ib)*(c+id) = (ac-bd)+i(ad+bc)

        string a, b, c, d;
        int i = 0;
        while (num1[i] != '+')
            a.push_back(num1[i++]);

        i++;

        while (num1[i] != 'i')
            b.push_back(num1[i++]);

        i = 0;
        while (num2[i] != '+')
            c.push_back(num2[i++]);

        i++;

        while (num2[i] != 'i')
            d.push_back(num2[i++]);

        int x1 = stoi(a);
        int y1 = stoi(b);
        int x2 = stoi(c);
        int y2 = stoi(d);

        int real_part = x1 * x2 - y1 * y2;
        int imag_part = x1 * y2 + x2 * y1;
        string ans = to_string(real_part) + "+" + to_string(imag_part) + "i";
        return ans;
    }
};