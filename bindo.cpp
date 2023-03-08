#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    string kal[4] = {"Dua hari yang lalu","Teman saya","pergi","ke manila"};

    for (int i =0;i < 4;i++) {
        for (int j=0;j < 4;j++) {
            if (j!=i) {
                for (int k =0;k < 4;k++) {
                    if (k != j && k!= i) {
                        for (int p =0;p < 4;p++) {
                            if (p != k && p != i && p != j) {
                                cout << kal[i] << " " << kal[j] << " " << kal[k] << " " << kal[p] << endl; 
                            }
                        }
                        
                    }
                }
                
            }
            
            
        }
        
        
        
    }
}
