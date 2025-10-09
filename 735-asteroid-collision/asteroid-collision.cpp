#include <stack>
#include <iostream>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> roids;
        for (int i = 0; i < asteroids.size(); i++) {
            cout << asteroids[i] << endl;
            if (asteroids[i] > 0) {
                roids.push(asteroids[i]);
            } else {
                cout << "Test" << endl;
                if (!roids.empty() && roids.top() > (asteroids[i] * -1)) {
                    continue;
                } else if (!roids.empty() && roids.top() > 0 && roids.top() < (asteroids[i] * -1)) {                    
                    
                    while (!roids.empty() && roids.top() > 0 && roids.top() < (asteroids[i] * -1)) {
                        roids.pop();
                    }
                    if (!roids.empty() && roids.top() > 0 && roids.top() == (asteroids[i] * -1)) {
                        roids.pop();
                        continue;
                    }
                    if (!roids.empty() && roids.top() > 0 && roids.top() > (asteroids[i] * -1)) {
                        cout << "HERE" << endl;
                        continue;
                    } else {
                        cout << "this" << endl;
                       roids.push(asteroids[i]); 
                    }
                } else if (!roids.empty() && roids.top() > 0 && roids.top() == (asteroids[i] * -1)) { 
                    roids.pop();

                } else {
                    
                    roids.push(asteroids[i]);
                }
                
            }
       } 
       vector<int> result;
       int n = roids.size();
       for (int j = 0; j < n ; j++) {
        cout << "Top: " << roids.top() << endl;
        result.push_back(roids.top());
        roids.pop();
       }
       if (!result.empty()) {
        reverse(result.begin(), result.end());
       }
       return result;

    }
};