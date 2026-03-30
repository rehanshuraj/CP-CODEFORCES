#include <vector>
#include <unordered_map>
#include <queue>

using namespace std;

class EventManager {
    unordered_map<int, int> ae;
    priority_queue<pair<int, int>> pq;

public:
    EventManager(vector<vector<int>>& events) {
        for (const auto& ev : events) {
            int id = ev[0];
            int p = ev[1];
            ae[id] = p;
            pq.push({p, -id});
        }
    }
    
    void updatePriority(int eventid, int newPriority) {
        if (ae.count(eventid)) {
            ae[eventid] = newPriority;
            pq.push({newPriority, -eventid});
        }
    }
    
    int pollHighest() {
        while (!pq.empty()) {
            auto topNode = pq.top();
            pq.pop();
            int p = topNode.first;
            int id = -topNode.second;
            
            if (ae.count(id) && ae[id] == p) {
                ae.erase(id);
                return id;
            }
        }
        return -1;
    }
};