#include <iostream>
using namespace std;
int main() {
    int x=0,y=0;
    //qn no 2. 
    cout<<"p  q\t"<<"p -> q \t\t [p n (p->q)]->q"<<endl;
    for(x=0;x<2;x++){
        for(y=0;y<2;y++){
            cout<<x<<"  "<<y<<"\t"<<bool(!x+y)<<"\t\t\t"<<bool(!(x*bool(!x+y))+y)<<endl;
        }  
    }
    return 0;
}

