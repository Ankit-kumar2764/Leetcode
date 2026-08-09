class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n=stones.size();
       priority_queue<int>pq;
        if(n==1) return stones[0];

     for(int i=0;i<n;i++){
        pq.push(stones[i]);
     }
     while(pq.size()>1){
        int x = pq.top();
       pq.pop();
       int y = pq.top();
       pq.pop();
        if(x!=y){
            pq.push(abs(x-y));
        }
     }
   return pq.empty()?0:pq.top();

    }
};