#include <cstdio>
#include <algorithm>
#include <cstring>
#include<iostream>
using namespace std;

#define sz 22
int sum[]={0,0,1,-1,0,0};

char grid[sz][sz];
bool vis[sz][sz];
int x,y,ans,row,col;

void dfs(int x,int y)
{
    //printf("row =%d\tcol = %d\n", row,col);
    for(int i=0; i<4; i++){
        //printf("into for loop\n");
        if( ((x+sum[i])>=0 && (x+sum[i])<row) && ((y+sum[i+2])>=0 && (y+sum[i+2])<col) && grid[x+sum[i]][(y+sum[i+2])] ==46  && !vis[x+sum[i]][(y+sum[i+2])]){
            //printf("into if\n");
            vis[x+sum[i]][(y+sum[i+2])]=1;
            ans++;
            dfs(x+sum[i],(y+sum[i+2]));
        }
    }
    //printf("DFS CALLED\n");
}
int main()
{
    int test,index=0;
    scanf("%d ", &test);
    while(test--)
    {
        scanf("%d %d", &col, &row);
        memset(vis,0,sizeof(vis));
        getchar();
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                grid[i][j]=getchar();
                if(grid[i][j]=='@'){
                    x=i, y=j, vis[x][y]=1;
                }
            }
            getchar();
        }

        ans=1;
        dfs(x,y);
        printf("Case %d: %d\n",++index,ans);
    }
}
