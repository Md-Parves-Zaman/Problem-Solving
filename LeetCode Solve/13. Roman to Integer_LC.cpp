#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int romanToInt(string s){
        unordered_map<char, int> map;
        map['I']=1;
        map['V']=5;
        map['X']=10;
        map['L']=50;
        map['C']=100;
        map['D']=500;
        map['M']=1000;
        int result=map[s[s.size()-1]];
        for(int i=s.size()-1;i>0;i--){
            if(map[s[i]]<=map[s[i-1]]){
                result+=map[s[i-1]];
            }
            else{
                result-=map[s[i-1]];
            }
        }

        //Time Complexity: O(n)
        //Space Complexity: O(n)
        return result;
    }
};

int main() {
    Solution solution;
    string romanNumeral;
    cout<<"Enter Roman Number: ";
    cin>>romanNumeral;
    int result = solution.romanToInt(romanNumeral);
    cout<<"Roman numeral \""<<romanNumeral<<"\" is equivalent to "<<result<<" in integer form."<<endl;
    return 0;
}
