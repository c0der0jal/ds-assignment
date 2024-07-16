#include <iostream>
using namespace std;
int main() {
    int x=0,y=0,z=0;
    //qn no 4. 
    cout<<"p  q  r\t"<<"\t(p -> q)\t\t(q -> r)\t\t(p -> r)\t\t[(p->q)n(q->r)]->p->r"<<endl;
    for(x=0;x<2;x++){
        for(y=0;y<2;y++){
            for(z=0;z<2;z++){
                cout<<x<<"  "<<y<<"  "<<z<<"\t\t"<<bool(!x+y)<<"\t\t\t\t\t"<<bool(!y+z);
                cout<<"\t\t\t"<<bool(!x+z)<<"\t\t\t\t\t\t"<<bool(!(bool(!x+y)*bool(!y+z))+bool(!x+z))<<endl;
            }   
        }   
    }
    return 0;
}

