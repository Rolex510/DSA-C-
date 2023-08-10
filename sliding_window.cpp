#include <iostream>
#include<vector>
#include<algorithm>
#include<iterator>
#include<set>

using namespace std;

int main()
{
    
    int arr[10] = {2,4,-1,5,1,9,-4,-5,8,6};
    vector<int> ans;
    int k;
    cin>>k;
    multiset<int,greater<int>> arr1;
    for(int i=0;i<k;i++){
        arr1.insert(arr[i]);
    }
    int x=k;
    ans.push_back(*arr1.begin());
    for(int i=k;i<=9;i++){
        arr1.erase(arr1.lower_bound(arr[i-x]));
        arr1.insert(arr[i]);
        ans.push_back(*arr1.begin());
    }
    vector<int>:: iterator it;
    for(it=ans.begin();it!=ans.end();++it){
        cout<<*it<<" ";
    }
    

    return 0;
}
