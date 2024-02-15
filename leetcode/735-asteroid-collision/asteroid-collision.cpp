class Solution {
public:
    vector<int> asteroidCollision(vector<int>& as) {
        vector<int> sol;
        int n = as.size();
        int i = 0;
        while(i<n){
            if(sol.size() == 0) {
                sol.push_back(as[i]);
                i++;
            }
            else{
                int x = sol[sol.size()-1]; // left
                int y = as[i]; // right
                sol.pop_back();
                while(true){

                    if((x > 0 && y > 0) || (x < 0 && y < 0) || (x < 0 && y > 0)){
                        sol.push_back(x);
                        sol.push_back(y);
                        i++;
                        break;
                    }
                    int m = max(abs(x), abs(y));
                    if(m == abs(x) && m == abs(y)){
                        i++;
                        break;
                    }
                    else if(m == abs(x)){
                        sol.push_back(x);
                        i++;
                        break;
                    }
                    else if(sol.size() == 0){
                        sol.push_back(y);
                        i++;
                        break;
                    }
                    else{
                        x = sol[sol.size()-1];
                        sol.pop_back();
                    }
                }
            }
        }
        return sol;
    }
};