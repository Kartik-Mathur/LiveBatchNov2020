//Question Link:https://leetcode.com/problems/gas-station/


class petrolPump  
{ 
    public: 
    int petrol;  
    int distance;  
};  

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
      
        int n=gas.size();
        if(n==0)
            return -1;
          if(n==1){
            if(gas[0]>=cost[0])
                return 0;
            return -1;
                 }
        petrolPump arr[n];
        for(int i=0;i<n;i++){
            arr[i].petrol = gas[i];
            arr[i].distance=cost[i];
        }
          int start = 0;  
    int end = 1;  
  
    int curr_petrol = arr[start].petrol - arr[start].distance;  
  
    /* Run a loop while all petrol pumps are not visited.  
    And we have reached first petrol pump again with 0 or more petrol */
    while (end != start || curr_petrol < 0)  
    {  
        // If curremt amount of petrol in truck becomes less than 0, then  
        // remove the starting petrol pump from tour  
        while (curr_petrol < 0  )  
        {  
            // Remove starting petrol pump. Change start  
            curr_petrol -= arr[start].petrol - arr[start].distance;  
            start = (start + 1) % n;  
  
            // If 0 is being considered as start again, then there is no  
            // possible solution  
            if (start == 0)  
            return -1;  
        }  
  
        // Add a petrol pump to current tour  
        curr_petrol += arr[end].petrol - arr[end].distance;  
  
        end = (end + 1) % n;  
    }  
  
    // Return starting point  
    return start;  
    }
};