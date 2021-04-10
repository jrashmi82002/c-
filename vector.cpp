# include<bits/stdc++.h>
using namespace std;

// int main(int argc, char const *argv[])
// { 
//     string s = "hello";
//     vector<char>v(s.begin(),s.end());
//    for(char &c : s)
//     {
//      vector<char>v1(v.begin()+1, v.end());
//      v1.push_back(c);
//     cout<<" "; 
//     for(char &c : v1)
//     {
//      cout<<c;
//     }
//     v = v1;
//     }
//     string bin("1101");
//     int dec = stoi(bin, nullptr, 2);
//     cout<<dec;
//     return 0;
// }
// int pow2(vector<char>v)
// {  int pow=1, c=0;
//     string s(v.begin(), v.end());
//     int num = stoi(s, nullptr, 2);
//     cout<<num<<" ";
//     while(pow<num)
//     {
//         pow *= 2;
//         if(num%pow == 0) 
//           c++;
//     }
//     cout<<c<<" "<<pow<<" ";
//  if(num%2 == 0)
//      return c;
//  else 
//   return 0;
// }

// int maximumPower(string s) 
// {  
//    int x,mx =0;
//    vector<char>v(s.begin(),s.end());
//    for(char &c : s)
//     {
//      vector<char>v1(v.begin()+1, v.end());
//      v1.push_back(c);
//      v = v1;
//      x = pow2(v);
//      if(x>mx) 
//       mx = x;    
//     }
//   return mx;
// }

// int main(int argc, char const *argv[])
// {
//    cout<< maximumPower("1100"); 
//     return 0;
// }
