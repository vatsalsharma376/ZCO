
#include <bits/stdc++.h>

using namespace std;
int main(){

	int n;
	cin >> n;
	set<string> output;

	cin.ignore(1000,'\n');

	for(int i = 0;i < n;i ++){
		char chars[80];
		cin.getline(chars,80);
		for(int j = 0; chars[j] != '\0'; j++){
			string str = "";
			while(isalpha(chars[j])){
				chars[j] = tolower(chars[j]);
				str.append(1,chars[j]);
				j++;
			}
			if(str!= "" ){
				output.insert(str);
			}
		}
	}

	set<string>::iterator i;

	cout << output.size() << "\n";

	for(i = output.begin();i != output.end();i++){
		cout << *i << "\n";
	}

	return 0;
}
