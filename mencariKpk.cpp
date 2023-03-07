#include <iostream>
using namespace std;

#define s short

int fpb(int a,int b) {
    if (a % b==0) return b;
    else return fpb(b,a %b);
}

int main(){
    s int x,dump=0,y;cin >> x;
    for (s int i=0;i < x;i++) {
        cin >> y;
        if (i >0) {
            dump = dump*y/fpb(dump,y);
        } else {
            dump = y;
        }
    }
    cout << dump;
    

}
