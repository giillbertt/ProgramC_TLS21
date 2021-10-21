#include<iostream>
#include<stdlib.h>
#include<cstring>
#include<time.h>

using namespace std;
static const char alphnum[] = "abcdefghijklmnopqrstuvwxyz"
"ABCDEFGHIJKLMNOPQRSTUVWXYZ" "0123456789" "!@#$%&";
int strlength = sizeof(alphnum)-1;
char GenRand()
{
    return alphnum[rand()%strlength];
}

int main()
{
    int panjang, n;
    srand (time(NULL));
    cout<<"Berapa panjang password yang diperlukan? ";
    cin>>panjang;

    char ch;
    string pw;
    for(n = 0; n < panjang; n++)
    {
        ch = GenRand();
        pw += ch;
    }

    cout<<"password anda adalah : "<<pw;

    return 0;
}