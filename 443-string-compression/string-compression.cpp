#include <iostream>
#include <cctype>

using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        int count = 1;
        int spot = 0;
        char c = chars[0];
        int charSize = chars.size();
        
        
        for (int i = 1; i <= charSize; i++) {
            if (i == charSize || chars[i] != c) {
                if (count != 0) {
                   

                    chars[spot] = c;
                    spot++;
                    int digit = 0;
                    cout << count;
                    if (count >= 1000) {
                        digit = count / 1000;
                        count = count - (1000*digit);
                        chars[spot] = digit + '0';
                        spot++;
                        if (count == 0) {
                            chars[spot++] = '0';
                            chars[spot++] = '0';
                            chars[spot++] = '0';
                        } else if (count >= 10) {
                            chars[spot++] = '0';
                        } else if (count < 10 && count > 0) {
                            chars[spot++] = '0';
                            chars[spot++] = '0';
                        }
                    }
                    if (count >= 100) {
                        digit = count / 100;
                        count = count - (100*digit);
                        chars[spot] = digit + '0';
                        spot++;
                        if (count == 0) {
                            chars[spot++] = '0';
                            chars[spot++] = '0';
                        }
                    }
                    if (count >= 10) {
                        digit = count / 10;
                        count = count - (10*digit);
                        cout << digit << endl << count;

                        chars[spot] = digit + '0';
                        spot++;
                        if (count == 0) {
                            chars[spot++] = '0';
                        }
                        if (count > 0) {
                        digit = count / 1;
                        chars[spot] = digit + '0';
                        spot++;
                        if (i < charSize) {
                            c = chars[i];
                            count = 1;
                        }
                        continue;
                        }
                    }
                    if (count > 1) {
                        digit = count / 1;
                        chars[spot] = digit + '0';
                        spot++;
                    }
                    if (i < charSize) {
                        c = chars[i];
                        count = 1;
                    } else {
                        break;
                    }
                }
            } else if (i < charSize && chars[i] == c) {
                count++;
            } 
        }
        return spot;

    }
};