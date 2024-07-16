#include <iostream>
using namespace std;
int main() {
    int x=0,y=0;
    //qn no 3. 
    cout<<"p  q\t"<<"-q\tp -> q\t\t-p \t\t [-q n (p->q)]->-p"<<endl;
    for(x=0;x<2;x++){
        for(y=0;y<2;y++){
            cout<<x<<"  "<<y<<"\t"<<!y<<"\t\t"<<bool(!x+y)<<"\t\t"<<!x;
            cout<<"\t\t\t"<<bool(!(!y*bool(!x+y))+!x)<<endl;
        }  
    }
    return 0;
}

