#include<bits/stdc++.h>
#define ios ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
using namespace std;

string pronunciation[10] = {"khong", "mot", "hai", "ba", "bon", "nam", "sau", "bay", "tam", "chin"};
string decimal[4] = {"", "muoi", "tram", "nghin"};

string pronounceNumber(string number, string pronunciation[], string decimal[]) {
    if (number.size() > 4) 
        return "";
    string result = "", output = "";
    if (number[number.size()-2] == '0') {
        pronunciation[0] = "linh";
        decimal[1] = "";
    }
    if (number[number.size()-1] == '0') pronunciation[0] = "";
    if (number[number.size()-2] == '1') pronunciation[1] = "";
    for (int i = 0; i < number.size(); ++i) {
        result = result + " " + pronunciation[(int) (number[i]-48)] + " " + decimal[number.size()-i-1];
    }
    stringstream getWord(result);
    string word;
    while (getWord >> word) 
        output += word + " ";
    return output;
}

int main() {
    string number;
    cin >> number;
    cout << pronounceNumber(number, pronunciation, decimal);
}