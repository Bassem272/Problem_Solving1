#include <iostream>
#include <cstdlib>
#include <queue>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <set>

using namespace std;

int main()
{
char c; cin>>c;
string str; cin>>str; 
        string keyboard= "qwertyuiopasdfghjkl;zxcvbnm,./";


            for(int i=0;i<str.length();i++)
        {
                int idx = keyboard.find(str[i]);
            if(c =='R')
            {
                cout<<keyboard[idx -1];       
            }else
            {
                cout<<keyboard[idx +1];
            };
            
}

    return 0;
}