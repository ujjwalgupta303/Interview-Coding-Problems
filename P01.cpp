/* P01- Splitting words of a string whose length is even and greater than 4 */

#include<bits/stdc++.h>
using namespace std;
void splitString(string s);
int main()
{
    string s="Hello I am Mike Saunders";
    //cin>>s;
 // here we'll divide those words into two equal halves whose length is greater than 4 and must be even
    splitString(s);
    return 0;
}
void splitString(string s)
{
    //cout<<s.size();
    s=s+" ";
    string w;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=' ')
        w+=s[i];
        else
        {
            if(w.size()>3 && (w.size()%2)==0)
            {
                for(int i=0;i<w.size()/2;i++)
                cout<<w[i];
                cout<<" ";
                
                for(int i=w.size()/2;i<w.size();i++)
                cout<<w[i];
                cout<<" ";
                w="";
            }
            else
            {
                cout<<w<<" ";
                w="";
            }
        }
    }
}
