#include<iostream>
#include<cstdio>
#include<cstring>
#include<map>
#include<string>
#include<queue>
#include<iterator>
using namespace std;

#define sz 26
#define forbidden -1
#define visited 1
#define not_visited 0
int sum[]={1,-1,0,0,0,0,1,-1,0,0};
int vis[sz][sz][sz];
int ans[sz][sz][sz];

int main()
{
    int test,tc=0;
    scanf("%d ", &test);
    while(test--)
    {
        int n;
        string first,sec;
        cin>>first>>sec>>n;//initial string and targeted string
        memset(vis,0,sizeof(vis));

        for(int m=0; m<n; m++)
        {
            string s1,s2,s3;
            cin>>s1>>s2>>s3;

            //this nested loop is for assigning forbidden strings
            for(int i=0; i<s1.length(); i++)
            {
                for(int j=0; j<s2.length(); j++)
                {
                    for(int k=0; k<s3.length(); k++)
                    {
                        vis[s1[i]-'a'][s2[j]-'a'][s3[k]-'a']=forbidden;
                    }
                }
            }
        }//scanf forbidden nodes

        if(vis[first[0]-'a'][first[1]-'a'][first[2]-'a']==forbidden)
        {
            printf("Case %d: -1\n", ++tc);
            continue;
        }

        ans[first[0]-'a'][first[1]-'a'][first[2]-'a']=0;


        queue<string> q;
        string p;
        q.push(first);
        bool flag=false;
        int x,y,z;
        while(!q.empty() && !flag)
        {
            p=q.front();
            q.pop();

            x=p[0]-'a',y=p[1]-'a',z=p[2]-'a';

            //checking if it matches with last item
            if(x==sec[0]-'a' && y==sec[1]-'a' && z==sec[2]-'a')
            {
                flag=1;
                break;
            }


            for(int i=0; i<6; i++)
            {
                int a = (x+sum[i])%26;
                int b = (y+sum[i+2])%26;
                int c = (z+sum[i+4])%26;

                if(a<0)
                    a+=26;
                if(b<0)
                    b+=26;
                if(c<0)
                    c+=26;

                if(vis[a][b][c]==not_visited)
                {
                    vis[a][b][c] = visited;
                    ans[a][b][c] = ans[x][y][z]+1;
                    string ptr;
                    char ch1=a+'a',ch2=b+'a',ch3=c+'a';
                    ptr.push_back(ch1);
                    ptr.push_back(ch2);
                    ptr.push_back(ch3);
                    q.push(ptr);
                    ptr.clear();
                }
            }
        }//while loop end
        if(flag)
            printf("Case %d: %d\n", ++tc,ans[x][y][z]);
        else
            printf("Case %d: -1\n", ++tc);

    }
}
