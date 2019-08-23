class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        int left = 1;
        int right = 50000;
        
        while (left < right) {
            int middle = (left + right) / 2;
            int mult; 
            if (middle % 2 == 0) {
                mult = (middle / 2) * (middle + 1);
            } else {
                mult = middle * ((middle + 1) / 2);
            }
            if (mult > candies) {
                right = middle;
            } else {
                left = middle + 1;
            }
        }
        
        int steps = left - 1;
        int iterations = steps / num_people;
        int rest = steps % num_people;
        
        vector<int> result(num_people, 0);
        for (int i = 0; i < rest; ++i) {
            result[i] = (i + 1) * (iterations + 1) + num_people * iterations * (iterations + 1) / 2;
        }
        
        for (int i = rest; i < num_people; ++i) {
            result[i] = (i + 1) * (iterations) + num_people * (iterations - 1) * (iterations) / 2;
        }
        
        result[rest] += candies - steps * (steps + 1) / 2;
        
        return result;
    }
};
