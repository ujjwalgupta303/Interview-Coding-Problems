//CHECKING IF OUR STRING CONTAINS A DIGIT OR NOT?

#include<bits/stdc++.h>
using namespace std;
void check(string s);
int main()
{
    string s;
    cin>>s;
    check(s);
    return 0;
}
void check(string s)
{
    any_of(s.begin(),s.end(), [](char x){ return isdigit(x); })? 
		cout << "There exists a digit" : 
		cout << "No Digit exists"; 
}
