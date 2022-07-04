#include<iostream>
#include<cstdio>
#include<vector>
#include<queue>
#include<algorithm>
#include<cstring>
using namespace std;

#define sz 100010
vector<int> graph[sz];
int visited[sz];

int bfs()
{
    int ans=0,x;
    for(int j=0; j<sz; j++)
    {
        if(!graph[j].empty() && !visited[j])
        {
            int vam=0,lyk=0;
            queue <int> q;
            q.push(j);
            visited[j]=1;
            vam++;
            while(!q.empty())
            {
                x=q.front();
                q.pop();
                for(int i= 0; i<graph[x].size(); i++)
                {
                    int y=graph[x][i];
                    if(!visited[y])
                    {
                        q.push(y);
                        if(visited[x]==1){
                            visited[y]=-1;
                            lyk++;
                        }
                        else if(visited[x]==-1){
                            visited[y]=1;
                            vam++;
                        }
                    }
                }
            }//while end
            ans+=max(vam,lyk);
        }
    }//for end

    return ans;
}

int main()
{
    int test,j=0;
    scanf("%d", &test);
    while(test--)
    {
        int n;
        scanf("%d", &n);
        memset(visited,0,sizeof(visited));
        for(int i=0; i<sz; i++)
            graph[i].clear();
        for(int i=0; i<n; i++)
        {
            int a,b;
            scanf("%d %d", &a, &b);
            graph[a].push_back(b);
            graph[b].push_back(a);
        }
        printf("Case %d: %d\n", ++j, bfs());
    }
}