class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> clean_emails;
        
        for (auto& email : emails) {
            size_t delimiter_pos = email.find("@");
            
            string local = email.substr(0, delimiter_pos);
            size_t plus_pos = local.find("+");
            if (plus_pos != string::npos) {
                local = local.substr(0, plus_pos);
            }
            string local_no_points;
            for (auto& ch : local) {
                if (ch != '.') {
                    local_no_points.push_back(ch);
                }
            }
            clean_emails.insert(local_no_points + email.substr(delimiter_pos));
        }
        
        return clean_emails.size();
    }
};
