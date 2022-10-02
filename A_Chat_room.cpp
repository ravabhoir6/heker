


#include<iostream>
#include<vector>
#include<map>
#include<list>
#include<set>
#include<algorithm>
#include<queue>
#include<stack>
#include<cstring>
#include<cmath>
#include<string>
#include<unordered_set>
#include<unordered_map>
#include<cstdlib>
using namespace std;

int main(){
    string s;
    cin >> s;
    string k = "hello";
    int j = 0;
    int count = 0;
    for(int i = 0; i<s.length();i++){
        if(s[i] == k[j]){
            j++;
            count++;
            if(count == 5){
                break;
            }
        }
    }
    if(count == 5){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}