//Nguyen Hoàng 

#include<bits/stdc++.h>
using namespace std;

string convertDecimalToBinary(int number) {
    string output = "";
    int temp;
    while (number > 0) {
        temp = number % 2;
        output = to_string(temp) + output;
        number /= 2;
    }
    output.insert(0, 8-output.size(), '0');
    return output;
}

string textToBinary(string text) {
    string output = "";
    for (int i = 0; i < text.size()-1; ++i)
        output = output + convertDecimalToBinary((int) text[i]) + " ";
    output = output + convertDecimalToBinary((int) text[text.size()-1]);
    return output;
}

int main() {
    cout << TextToBinary("Hasagi");
}