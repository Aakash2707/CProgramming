#include <iostream>
using namespace std;
int main(){
    int col;
    int row;
    cin>>col>>row;
    for(int i=1;i<=row;i++){
        for(int j= 1;j<=col;j++){
            cout<<"*";
        }
        cout<<endl;
    
    }
}