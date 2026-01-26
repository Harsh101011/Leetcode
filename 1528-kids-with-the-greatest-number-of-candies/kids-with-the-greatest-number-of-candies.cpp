class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> great;
        int g = candies[0];
        for(int i = 0; i<candies.size(); i++){
            if(g < candies[i]){
                g = candies[i];
            }
        }
        for(int i = 0; i<candies.size(); i++){
            if(candies[i] + extraCandies >= g){
                great.push_back(true);
            }
            else{
                great.push_back(false);
            }
        }
        return great;
    }
};