class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        vector<string> result;
        
        unordered_map<string, int> visits;
        for (auto& d : cpdomains) {
            int index = d.find(" ");
            int number = stoi(d.substr(0, index));
            
            visits[d.substr(index + 1)] += number;
            int pos = 0;
            while((pos = d.find(".", pos + 1)) != string::npos) {
                visits[d.substr(pos + 1)] += number;
            }
        }
        
        for (auto& s : visits) {
            result.push_back(to_string(s.second) + " " + s.first);
        }
        
        return result;
    }
};
