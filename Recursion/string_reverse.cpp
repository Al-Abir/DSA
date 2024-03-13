#include<bits/stdc++.h>

using namespace std;
void reverse_String(std::string & text, int start, int end) {

  if (start >= end)
    return ;


   swap(text[start], text[end]);

 
  reverse_String(text, start + 1, end - 1);
}
int main(){
      string text;
      cin>>text;

       reverse_String(text, 0, text.length() - 1);
       cout << "Reversed string: " << text << endl;


return 0;
}

