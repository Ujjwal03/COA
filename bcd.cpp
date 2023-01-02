#include <bits/stdc++.h>
using namespace std;
string BCDAddition(int A, int B)

{

	string s = to_string(A + B);
	int l = s.length();
  string ans;
  string str;
  for (int i = 0; i < l; i++) 
  {
    str = bitset<4>(s[i]).to_string();
		ans.append(str);
	}
   const auto loc1 = ans.find('1');
   if (loc1 != string::npos) {
		return ans.substr(loc1);
	}
	return "0";
}

int main()
{

	int A = 12, B = 20;
  cout << BCDAddition(A, B);
	return 0;
}
