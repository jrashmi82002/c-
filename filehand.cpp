#include <iostream>
#include <fstream>
#include <stdio.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int a;
    char str[100];
    ofstream f;
    f.open("a.txt", ios::in | ios::out);
    gets(str);
    f.write((char *)&str, sizeof(str));
    f.close();
    ifstream i;
    i.open("a.txt", ios::in);
    char ch[10];
    while (!i.eof())
    {
        i.getline(ch, 10);
        puts(ch);
    }
    i.close();
    return 0;
}
