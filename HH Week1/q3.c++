#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Enter scores of 10 people: "<<endl;
    vector<int> arr(10);
    int m=0;
    for(int i=0;i<10;i++){
        cin>>arr[i];
        m = m + arr[i];
    }
    sort(arr.begin(),arr.end());
    double avg = m/10.0;
    int less=0;
    int more=0;
    for(int j=0;j<10;j++){
        if(arr[j]>avg){
            more++;
        }
        if(arr[j]<avg){
            less++;
        }
    }
    cout<<"Average exam score: "<<avg<<endl;
    cout<<"Highest exam score: "<<arr[9]<<endl;
    cout<<"Lowest exam score: "<<arr[0]<<endl;
    cout<<"Number of exam scores above the average: "<<more<<endl;
    cout<<"Number of exam scores below the average: "<<less<<endl;

}