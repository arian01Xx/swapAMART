#include <vector>
#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

class Solution {
public:
    int maximumSwap(int num) {
        string numStr=to_string(num);
        int n=numStr.size();

        vector<int> last(10,-1);
        for(int i=0; i<n; ++i){
            last[numStr[i]-'0']=i; //numero 7 valor 1 que es la posicion
            //last[7]=1  -> porque en el numStr[1]=7
        }

        for(int i=0; i<n; ++i){
            for(int d=9; d>numStr[i]-'0'; --d){
                if(last[d]>i){ //la posicion segunda es mayor a la posicion primera?
                    swap(numStr[i], numStr[last[d]]);
                    return stoi(numStr);
                }
            }
        }
        return num;
    }
};

int main(){
    return 0;
}