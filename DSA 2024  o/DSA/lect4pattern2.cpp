#include<iostream>
using namespace std;
int main(){
    //pattern 1
/*int n;
cin>>n;
int i=1;
while(i<=n){
    int j=1;
    while(j<=n){
        char ch = 'A' + i -1;//formula
        cout<<ch;
        //ch=ch+1;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}

*/
//pattern 2;
/*int n;
cin>>n;
int i=1;
while(i<=n){
        int j=1;
      char ch ='A' + j - 1;//formula
while(j<=n){
        cout<<ch;
 ch=ch+1;
        j=j+1;
 }
    cout<<endl;
    i=i+1;
}
*/
//pattern 3;
/*
int n;
cin>>n;
char ch='A';
int i=1;
while(i<=n){
    int j=1;
    while(j<=n){
        cout<<ch;
        ch= ch+1;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}
*/

//pattern 4
/*
int n;
cin>>n;
int i=1;
while(i<=n){
    int j=1;
    while(j<=n){
            char ch='A' + i + j-2;//formula
        cout<<ch;
        ch= ch+1;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}

*/
//pattern 4;
/*
int n;
cin>>n;
int i=1;
while(i<=n){
    int j=1;
    char ch=('A' + i - 1);
    while(j<=i){
    cout<<ch;
    j=j+1;
    }
    cout<<endl;
    i=i+1;
}
*/
//pattern 5;

/*int n;
cin>>n;

int i=1;
while(i<=n){
    int j=1;
    char ch='A'+ n - i;
    while(j<=i){
        cout<<ch;
        ch=ch+1;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}
*/
/*
int n;
cin>>n;

int i=1;
while(i<=n){
    int space = n - i;
    while(space){
            cout<<" ";
        space=space-1;
    }
    int j=1;
    while(j<=i){
        cout<<"*";
        j= j + 1;
    }
    cout<<endl;
    i=i+1;

}
*/
/*
int n;
cin>>n;
int i=1;
while(i<=n){
    int space=n-i+1;
    while(space){
        cout<<" ";
        space=space-1;
    }
    int j=1;
    while(j<=i){
        cout<<"*";
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}
*/
int n;
cin>>n;
int i=1;
while(i<=n){
    //print space (1st tringle)
    int space = n-i;
    while(space){
        cout<<" ";
        space = space - 1;
    }
    //print 2st tringle
    int j = 1;
    while(j<=i){
        cout<<j;
        j=j+1;
    }
    //print third tringle
int start=i-1;
while(start){
    cout<<start;
    start=start - 1;
}
    cout<<endl;
    i = i + 1;
}
}
