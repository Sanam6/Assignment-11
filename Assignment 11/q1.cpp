#include<iostream>
#include<vector>
using namespace std;

bool perfectmatrix(vector<vector<int>> &arr){
    for(int i =1;i<arr.size();i++){
        for(int j = 1;j<arr[0].size();j++){
            if(arr[i][j]!=arr[i-1][j-1])return false;
        }
    }
    return true;
}

int main()
{
int m,n;
cin>>m>>n;
vector<vector<int>>arr(m,vector<int> (n));
for(int i =0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>arr[i][j];
    }
}
perfectmatrix(arr)?cout<<"True":cout<<"False";

return 0;
}