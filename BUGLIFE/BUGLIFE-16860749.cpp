#include<cstdio>
#include <stack>
#include <cstring>

#define MAX 2005
using namespace std;


/*This is inefficient. Make use of adjacency lists to store neighbours and not array*/
int v[MAX][MAX]; /*Can't declare very long arrays in main*/

int color[MAX];

int main() {
    int n1, n2, t, n;
    long interact; /*doesn't need to be long*/

//    vector<vector<int> > v(2001, vector<int>(2001)); Can use a normal array instead
    scanf("%d", &t);

    int temp = t;
    while (t--) {
        scanf("%d %ld", &n, &interact);

//        v.clear();
//        v.resize(2001, vector<int>(2001));Why do this? This is expensive!!

        for (int i = 0; i < MAX; i++) for (int j = 0; j < MAX; j++) v[i][j] = 0;

        memset(color, -1, sizeof(color));
        for (int i = 0; i < interact; i++) {
            scanf("%d%d", &n1, &n2);
            v[n1][n2] = 1;
            v[n2][n1] = 1;
        }


        int flag = -1;
        for(int x=0;x<=n;x++) {
            stack<int> node;
            if (color[x] == -1)/*Only do dfs if it is unvisited*/{
                node.push(x);
                color[x] = 1;
                while (!node.empty()) {
                    int k = node.top();
                    node.pop();
                    for (int j = 1; j <= n; j++) {
                        if (v[k][j] == 1) {
                            //printf("k=%d j=%d\n",k,j);
                            if (color[j] == -1) {
                                color[j] = 1 - color[k];
                                node.push(j);
                            }
                            else if (color[j] == color[k]) {
                                printf("Scenario #%d:\n", temp - t);
                                printf("Suspicious bugs found!\n");
                                flag = 0;
                                break;
                            }
                        }
                    }
                    if (!flag) break; //Break the while loop
                }
                if (!flag)break; //Break the loop checking for unvisited nodes and then performing dfs on them
            }
        }
        if (flag == 0)
            continue;
        else {
            printf("Scenario #%d:\n", temp - t);
            printf("No suspicious bugs found!\n");
        }
    }
    return 0;
}