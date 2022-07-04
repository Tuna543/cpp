#include <bits/stdc++.h>

using namespace std;
#define ll long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nl cout << "\n"
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define srt_v(n) sort(v, v + n)
#define all(v) v.begin(), v.end()
#define tc       \
    ll test;     \
    cin >> test; \
    while (test--)
#define rep(i, a, b) for (ll i = a; i < b; i++)
#define rev(i, a, b) for (ll i = a; i >= b; i--)
#define vpi vector<pair<ll, ll>>
#define MAX 1000002
int m[MAX];

map<string, int> st;
map<int, string> reverse_st;
/*
int calculate(vector<string> v)
{
    int sign=1,word=0,total=0;
    rep(i,1,v.size()){
        if(i%2==0){
            if(v[i]=="-")
                sign=sign*-1;
        }
        else{
            word=st[v[i]];
            total+=sign*word;
        }
    }
    return total;
}
*/
int stringtointerger(string s)
{
    int sign=1,total=0;
    if(s[0]=='-'){
        sign=-1;
    }
    rep(i,0,(int)s.length()){
        if(s[i]=='-')
            continue;
        total=total*10+(s[i]-'0');
    }
    return total*sign;
}

void solve()
{
    string str;
    while (getline(cin, str))
    {
        stringstream s(str);
        string word;
        vector<string> v;
        while (s >> word)
        {
            v.pb(word);
        }

        if (v[0] == "clear")
        {
            st.clear();
            reverse_st.clear();
        }
        else if (v[0] == "def")
        {
            int num = stringtointerger(v[2]);
            if(st.find(v[1])!=st.end()){
                reverse_st.erase(st[v[1]]);
            }
            st[v[1]] = num;
            reverse_st[num] = v[1];
        }
        else if (v[0] == "calc")
        {
            int sign = 1, word = 0, total = 0;
            bool flag=0;
            rep(i, 1, v.size())
            {
                cout<<v[i]<<" ";
                if (i % 2 == 0)
                {
                    if (v[i] == "-")
                        sign = -1;
                    else{
                        sign= +1;
                    }
                }
                else
                {
                    
                    if(reverse_st.count(st[v[i]])){
word = st[v[i]];
                        total += sign * word;}
                    else{
                        flag=1;
                        //goto last;
                    }
                }
            }
            if (reverse_st.count(total) && flag==0)
            {
                cout << reverse_st[total];
                nl;
                continue;
            }
            else
            {
                cout << "unknown";
                nl;
            }
                
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    /// tc{
    solve();
    ///}
    return 0;
}