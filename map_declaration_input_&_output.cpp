#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string s;
    cin >> s;

//declaration of map
    map<char, vector<int>> m;

//taking input in map
    for(int i=0; i<s.size(); i++){
        m[s[i]].push_back(i+1);
    }

// printing map's keys & values
    for (auto el1 = m.cbegin(); el1 != m.cend(); ++el1) {
		cout << el1->first << " ";
		for(auto &el2: el1->second){
		    cout << el2 << " ";
		}
		cout << endl;
	}
    return 0;
}


int main()
{
    std::string s = "ABCBADCA";

    std::unordered_map<char,int> freq;
    for (const char &c: s)
    {
        // check if key 'c' exists in the map or not
        std::unordered_map<char,int>::iterator it = freq.find(c);

        // key already present in the map
        if (it != freq.end()) {
            it->second++;   // increment map's value for key 'c'
        }
        // key not found
        else {
            freq.insert(std::make_pair(c, 1));
        }
    }

    for (auto &e: freq) {
        std::cout << '{' << e.first << ", " << e.second << '}' << '\n';
    }
}