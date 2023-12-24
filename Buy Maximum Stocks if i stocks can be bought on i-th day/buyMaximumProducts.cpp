
class stock{
    public:
    int price,day;
    stock(int a,int b){
        price=a;
        day=b;
    }
};

class Solution {
public:
    int buyMaximumProducts(int n, int k, int price[]){
        //Write your code here
        vector<stock> v;
        int cnt;
        
        for(int i=0;i<n;i++){
            v.emplace_back(stock(price[i],i+1));
        }
        
        sort(v.begin(),v.end(),[](stock &a, stock &b){
            return a.price < b.price;
        });

        for (const auto& dp : v) {
            int pr=dp.price;
            int d=dp.day;
            if(pr*d <= k){
                cnt+=d;
                k-=d*pr;
            }
            else{
                
                cnt+=k/pr;
                k-=(k/pr)*pr;

            }
        }
        
        return cnt;
    }
};