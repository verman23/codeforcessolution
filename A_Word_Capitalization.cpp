// #include <iostream>
// #include <string>

// using namespace std;

// string Capitalize_first_letter(string text) {

// 	for (int x = 0; x < text.length(); x++)
// 	{
// 		if (x == 0)
// 		{
// 			text[x] = toupper(text[x]);
// 		}
// 		else if (text[x - 1] == ' ')
// 		{
// 			text[x] = toupper(text[x]);
// 		}
// 	}

// 	return text;
// }

// int main() 
// {
//     string s;
//     cin>>s;
// 	cout << Capitalize_first_letter(s)<<endl;
	
// 	return 0;
// }
  
//   or you can use this m
#include<bits/stdc++.h>
 using namespace std;
    
int main(){
string s;
cin>>s;
s[0]=towupper(s[0]);
cout<<s<<endl;
    return 0;
}