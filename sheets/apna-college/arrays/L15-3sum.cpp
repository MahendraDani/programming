#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// Time : O(N^3 * number of unique triplets)
// Space : 2 * O(number of triplets)
vector<vector<int>> brute(vector<int>& arr) {
    int n = arr.size();
    set<vector<int>> st;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i] + arr[j] + arr[k]==0){
                    vector<int> tmp{arr[i],arr[j],arr[k]};
                    sort(tmp.begin(),tmp.end());
                    st.insert(tmp);
                }
            }
        }
    }

    set<vector<int>>::iterator it = st.begin();
    vector<vector<int>> res;
    for(;it!=st.end();it++){
        res.push_back(*it);
    }
    return res;
}

// Time : O(N^2 * log(M)), M -> size of hashset
// Space : O(N) + O(number of unique triplets) * 2
vector<vector<int>> better(vector<int>& arr) {
    set<vector<int>> st;
    int n = arr.size();

    for(int i=0;i<n;i++){
        set<int> hash;
        for(int j=i+1;j<n;j++){
            int need = -1 * (arr[i] + arr[j]);
            if(hash.find(need)!=hash.end()){
                vector<int> tmp{arr[i],arr[j],need};
                sort(tmp.begin(),tmp.end());
                st.insert(tmp);
            }
            hash.insert(arr[j]);
        }
    }
    vector<vector<int>> res(st.begin(),st.end());
    return res;
}

// Time : O(NlogN) + O(N*N)
// Space : O(number of unique triplets)
vector<vector<int>> best(vector<int>& arr) {
    int n = arr.size();
    sort(arr.begin(),arr.end());

    vector<vector<int>> res;
    for(int i=0;i<n;i++){
        if(i>0 && arr[i]==arr[i-1]) continue;
        int j = i +1;
        int k = n-1;
        while(j<k){
            int sum = arr[i] + arr[j] + arr[k];
            if(sum < 0){
                j++;
            }else if(sum > 0){
                k--;
            }else{
                vector<int> tmp{arr[i],arr[j],arr[k]};
                res.push_back(tmp);
                j++;
                k--;

                while(j < k && arr[j]==arr[j-1]) j++;
                while(j < k && arr[k]==arr[k+1]) k--;
            }
        }
    }
    return res;
}

vector<vector<int>> threeSum(vector<int>& arr) {
    return best(arr);
}

int main(){
  return 0;
}
