#include<stdio.h>
#include<conio.h>
#include<string.h>
int main() {
    char s[100];
    char t[100];
    char st[200];
    int count[256] = {0};
    //nhap xau s va t
    gets(s);
    gets(t);
    int lens = strlen(s);
    int lent = strlen(t);
    int lenst = lens + lent;
    //dem so lan xuat hien
    for (int i = 0; i < lens; ++i) ++count[s[i]];
    for (int i = 0; i < lent; ++i) ++count[t[i]];
    //gop hai xau s va t vao st
    for (int i = 0; i < lens; ++i) {
        st[i] = s[i];
    }
    int j = 0;
    for (int i = lens; i < lenst; ++i) {
        st[i] = t[j];
        ++j;
    }
    //sap xep ky tu trong xau st tang dan 
    char temp;
    for (int i = 0; i < lenst-1; ++i) {
        for (int j = i+1; j < lenst; ++j) {
            if (st[i] > st[j]) {
                temp = st[i];
                st[i] = st[j];
                st[j] = temp;
            }
        }
    }
    //in ra ky tu rieng biet trong xau st
    for (int i = 0; i < lenst; ++i) {
        if (st[i] != st[i-1]) {
            printf("%c", st[i]);
        }
    }
    //in ra so lan xuat hien cua cac ky tu
    printf("\n");
    for (int i = 0; i < lenst; ++i) {
        if (st[i] != st[i-1]) {
            printf("%d\n", count[st[i]]);
        }
    }
    // _getch();
}