//Q1

#include<iostream>
using namespace std;

int main(){

    int rows,columns;
    cin>>rows>>columns;

    for(int i = 1; i <= rows;i++ ){
        for(int j = 1; j<=columns; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}

//Q2

#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(n>0 ; n--;){
        for(int i = n; i>0; i--){
            cout<<"*";
        }
        cout<<endl;

    }

    return 0;
}

