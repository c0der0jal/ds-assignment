
#include <iostream>
using namespace std;
int main() {
    int x=0,y=0,z=0;
    //qn no 1a. 
    cout<<"p  q  r\t"<<"-p\t(p n -q v r)\t(-p v r)\t\t(p n -q v r)->(-p v r)"<<endl;
    for(x=0;x<2;x++){
        for(y=0;y<2;y++){
            for(z=0;z<2;z++){
                cout<<x<<" "<<y<<" "<<z<<"\t"<<!x<<"\t\t"<<bool(x*!y+z);
                cout<<"\t\t\t"<<bool(!x+z)<<"\t\t\t\t"<<bool(!bool(x*!y+z)+bool(!x+z))<<endl;
            }   
        }   
    }
    //qn no 1b.
    cout<<"p  q  r\t"<<"-p\t(p n -q v r)\t(-p v r)\t\t(p n -q v r)<->(-p v r)"<<endl;
    for(x=0;x<2;x++){
        for(y=0;y<2;y++){
            for(z=0;z<2;z++){
                cout<<x<<" "<<y<<" "<<z<<"\t"<<!x<<"\t\t"<<bool(x*!y+z);
                cout<<"\t\t\t"<<bool(!x+z)<<"\t\t\t\t"<<bool(!bool(x*!y+z)*bool(!x+z))<<endl;
            }   
        }   
    }
    return 0;
}

