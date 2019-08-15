class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string> result;
        string stringToFind = first + " " + second;
        int findFromPosition = 0;
        int successPosition;
        
        while ((successPosition = text.find(stringToFind, findFromPosition)) != string::npos) {
            int thirdStartPosition = successPosition + stringToFind.size() + 1;
            int thirdEndPosition = text.find(" ", thirdStartPosition);
            
            string third;
            if (thirdStartPosition < text.size()) {
                third = (thirdEndPosition == string::npos ? text.substr(thirdStartPosition) : text.substr(thirdStartPosition, thirdEndPosition - thirdStartPosition));
                
                result.push_back(third);
            } else {
                third = "";
            }
                
            findFromPosition = successPosition + first.size() + 1;
        }
     
        return result;
    }
};
