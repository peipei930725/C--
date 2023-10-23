#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    int N=0,M=0;
    cin>>N>>M;

    vector<int> v;
    for(int i=0;i<N;++i){
        int num;
        cin>>num;
        v.push_back(num);
    }
    char o1,o2;
    cin>>o1>>o2;

    sort(v.begin(),v.end());
    vector<int> odd;
    vector<int> even;

    for(int i=0;i<N;++i){
        if(v[i]%2==0){
            even.push_back(v[i]);
        }
        else{
            odd.push_back(v[i]);
        }
    }
    cout<<N<<" "<<M<<endl;
    for(int i=0;i<M;++i){
        for(int x=0;x<odd.size();++x){
            if(odd[odd.size()-1-x]%M==i){
                cout<<odd[odd.size()-1-x]<<endl;
            }
        }
        for(int y=0;y<even.size();++y){
            if(even[y]%M==i){
                cout<<even[y]<<endl;
            }
        }
    }
    cout<<"0 0"<<endl;
    return 0;
    

}