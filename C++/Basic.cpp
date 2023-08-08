//P1

#include<iostream> //preprocessor directive //iostream : header file for input and output
using namespace std;

int main(){ //where to start execution //mandatory
    int a; //declaration
    a = 12; //initialisation

    cout<<"size of int"<<sizeof(a)<<endl;

    float b;
    cout<<"size of float"<<sizeof(b)<<endl;

    return 0;

}

//P2

#include<iostream>
using namespace std;

int main(){

    int amount1;
    cin>>amount1;

    int amount2;
    cin>>amount2;

    int sum = amount1 + amount2;
    cout<<sum;

    return 0;
}

//P3

#include<iostream>
using namespace std;

int main(){

    int a,b,c;
    cin>>a>>b>>c;

    if(a>b){
        if(a>c){
            cout<<a<<endl;
        }
        else{
            cout<<c<<endl;
        }
        
    }
    else{
        if(b>c){
            cout<<b<<endl;
        }
        else{
            cout<<c<<endl;
        }
    }



    return 0;
}

//P4

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    if(n%2==0){
        cout<<"even"<<endl;
    }
    else{
        cout<<"odd"<<endl;
    }

    return 0;
}

//P5

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int sum = 0;
    for (int counter = 1; counter <= n; counter++){
        sum = sum+counter;
    }

    cout<<sum<<endl;
}

//P6

#include<iostream>
using namespace std;

int main(){

    int pocketmoney = 3000;
    for(int date = 1; date <=30; date++){
        if(date%2 == 0){
            continue;
        }

        if(pocketmoney == 0){
            break;
        }
        cout<<"Go out today"<<endl;
        pocketmoney = pocketmoney - 300;

    }

    return 0;
    
}

//P7

#include<iostream>
using namespace std;

int main(){

    for(int i = 0; i<100; i++){
        if(i%3== 0){
            continue;
        }
        cout<<i<<endl;
    }



    return 0;
}

//P7

#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int i;

    for(int i = 2; i<n; i++){
        if(n%i==0){
            cout<<"Non Prime"<<endl;
            break;
        }
    }
    if(i==n){
        cout<<"Prime Number"<<endl;
    }

    cout<<"Prime"<<endl;
    return 0;
}

//P8
#include<iostream>
using namespace std;

int main(){

    int a,b;
    cin>>a>>b;
    int i;

    for(int num = a; num <= b; num++){
        for(int i = 2; i<num; i++){
            if(num%i==0){
                break;
            }
        }
        if(i==num){
            cout<<num<<endl;
        }
    }
}

//P9

#include<iostream>
using namespace std;

int main(){

    char button;
    cout<<"Input a character";
    cin>>button;

    switch(button){
        case 'a':
        cout<<"Hello";
        break;

        case 'b':
        cout<<"namsaste";
        break;

        default:
        cout<<"Still learning"<< endl;
        break;
    }
}

//P10

#include<iostream>
using namespace std;

int main(){

    int n1,n2;
    cout<<"Input two numbers";
    cin>>n1>>n2;

    char op;
    cout<<"Input an operator";
    cin>>op;

    switch(op)
    {
        case '+':
        cout<< n1+ n2 <<endl;
        break;

        case '-':
        cout<< n1 - n2 <<endl;
        break;

        default:
        cout<<"enter anpther operator";
        break;


    }

    return 0;

}

//P11
#include<iostream>
using namespace std;

int main(){

    int i = 1;
    i = i++ + ++i; //4

    cout<<i<<endl;

    return 0;

    
}

/*
//P12
#include<iostream>
using namespace std;

int main(){

}
*/