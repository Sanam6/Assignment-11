#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int m;
    cin>>m;
    vector<pair<int,int>> v(m);
    for(int i =0;i<m;i++){
        cin>>v[i].first>>v[i].second;
    }
     vector<pair<int,int>> arr;
     int k=-1;
     
     for(int i =0; i<m; i++){
       
        if(i==0||!(arr[k].second>v[i].first)){
            k++;
            arr.push_back(make_pair(v[i].first,v[i].second));
        }
        else if(arr[k].second>v[i].first){
            if(!(arr[k].second>v[i].second))
            arr[k].second= v[i].second;
        }
        else{
            arr[k].second= v[i].second;
        }
  }
 for(int i =0;i<arr.size();i++){
    cout<<"["<<arr[i].first<<","<<arr[i].second<<"]"<<"  ";
 }    

return 0;
}