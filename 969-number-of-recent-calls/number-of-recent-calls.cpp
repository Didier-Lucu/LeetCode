#include <queue>
#include <iostream>

using namespace std;
// We have a queue that we will with each request but each time we 
// also need to return the number of requests within the 3000 milliseconds 
// which means we are constantly cleaning it out. I go through the queue 
// each time removing any that are no longer valid, counting the number 
// that are and returning that.
class RecentCounter {
    queue<int> request;
public:
    RecentCounter() {
        
    }
    
    int ping(int t) {
        request.push(t);
        while (request.front() < t - 3000) {
            request.pop();
        }
        return request.size();
    }
};
//         int right = t - 3000;
//         int left = t;
//         int count = 0;
//         request.push(t);
//         int n = request.size();
//         for (int i = 0; i < n; i++) {
//             if (right <= request.front() && left >= request.front()) {
//                 count++;
//                 request.push(request.front());
//                 request.pop();
//             } else {
//                 request.pop();
//             }
//         }
//         return count;

//     }
// };

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */