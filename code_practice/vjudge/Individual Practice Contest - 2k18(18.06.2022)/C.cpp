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
//int m[MAX];

map<string,int> m;
map<int,string> rev_m;

int calculate(vector<string> v)
{
    int total;
    if(m.count(v[0]))
        total=m[v[0]];
    else{
        total=2005;
        return total;
    }
    for(int i=1; i<v.size(); i++){
        if(v[i]=="+"){
            i++;
            if(m.count(v[i]))
                total+=m[v[i]];
            else{
                total=2005;
                return total;
            }
        }
        if(v[i]=="-"){
            i++;
            if(m.count(v[i]) && m[v[i]]!=2005)
                total-=m[v[i]];
            else{
                total=2005;
                return total;
            }
        }    
    }
    if(total<-1000 || total>1000) total=2005;
    return total;
}


void solve()
{
    string s,word,num;
    int number;
    while(cin>>s){
        if(s=="clear"){
            m.clear();
            rev_m.clear();
        }
        else if(s=="def"){
            cin>>word>>num;
            number=stoi(num);//converting string num to int numbers
            //hello 5
            //hello 6
            if(m.find(word)!=m.end()){
                rev_m.erase(m[word]);//removing number of word
                m.erase(word);//removing word
            }
            //hello 10
            //how 10
            if(rev_m.find(number)!=rev_m.end()){
                //cout<<"redefining"<<endl;
                rev_m.erase(number);//removing number
                m.erase(rev_m[number]);//previous word has been removed
            }
            m[word]=number;
            rev_m[number]=word;
        }
        else if(s=="calc"){
            vector<string> v;
            int total=0;
            while(cin>>word){
                v.pb(word);
                if(word=="=") break;
            }
            //printing the whole line
            for(int i=0; i<v.size(); i++){
                cout<<v[i]<<" ";
                //cout<<"("<<m[v[i]]<<") ";
            }
            v.pop_back();//removing = sign
            total=calculate(v);
            //every word has a def
            if(total!=2005){
                if(rev_m.count(total)){//total has a string value
                    cout<<rev_m[total]<<"\n";
                    //cout<<" total: "<<total<<" total+1000="<<total+1000<<endl;
                }
                else{
                    cout<<"unknown\n";
                    //cout<<" total: "<<total<<" total+1000="<<total+1000<<endl;
                }
            }
            else{
                cout<<"unknown\n";
            }
        }
    }
}
int main()
{
    /*
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);*/
    /// tc{
    solve();
    ///}
    return 0;
}

/*
def hello -10
def how -10
def are -20
def you 0
def fine 2
def thnx 12
calc hello + hello =
calc hello - how =
calc fine - how =
calc thnx - fine =
calc thnx + hello =
*/