//rock paper scissor game
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a="rock";
    string b="paper";
    string c="scissor";
    string d;
    cin>>d;
    string e;
    cin>>e;
    if((a==d && e==a) || (d==b && e==b) || (d==c && c==e) ){
        cout<<"Tie\n";
    }
    else if((a==d && b==e) || (e==d && a==e)){
        cout<<b<<" Won"<<endl;
    }
    else if((b==d && c==e) || (c==d && b==e)){
        cout<<c<<" Won"<<endl;
    }
    else if((c==d && a==e) || (a==d && c==e)){
        cout<<a<<" Won"<<endl;
    }
    else{
        cout<<"Enter the crct names\n"<<"Names are:\n"<<"1.rock\n 2.paper\n 3.scissor\n";
    }
}