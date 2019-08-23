class Solution {
private:
        unsigned int get_k_ones(int k) {
            unsigned int result = 0;
            while (k) {
                result |= 1 << (k - 1);
                --k;
            }
            return result;
        }
    
        unsigned int get_k_zeros(int k) {
            return ~get_k_ones(k);
        }
    
        string num_to_ip(unsigned int num) {
            return to_string(num >> 24) + "." + to_string((num >> 16) & 255) + "." + to_string((num >> 8) & 255) + "." + to_string(num  & 255);
        }
public:
    vector<string> ipToCIDR(string ip, int n) {
        unsigned int start = 0;
        
        int prev = ip.find('.');
        start = start | (stoi(ip.substr(0, prev)) << 24);
        
        int pos = ip.find('.', prev + 1);
        start = start | (stoi(ip.substr(prev + 1, pos - prev - 1)) << 16);
        prev = pos;
        
        pos = ip.find('.', prev + 1);
        start = start | (stoi(ip.substr(prev + 1, pos - prev - 1)) << 8);
        
        start = start | stoi(ip.substr(pos + 1));
        
        vector<string> result;
        unsigned int finish = start + n;
        while (start < finish) {
            int shift = 0;
            for (int i = 1; i < 32; ++i) {
                if (((start | get_k_ones(i)) < finish) && ((start & get_k_zeros(i)) >= start)) {
                    shift = i;
                } else {
                    break;
                }
            }
            result.push_back(num_to_ip(start) + "/" + to_string(32 - shift));
            start += (1 << shift);
        }
        
        return result;
    }
};
