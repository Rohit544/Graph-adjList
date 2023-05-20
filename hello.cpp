#include<bits/stdc++.h>
using namespace std;

//how create node and adj list in graph
class graph{
    unordered_map<int , list<int>> adj;

     int addAdj(int u, int v ,bool dir){
        adj[u].push_back(v);
        if(dir==0){
            adj[v].push_back(u);
        }
        return 0;
     }

     //now how to print adj list
     int printAdj(){
        for(auto i: adj){
            cout<<i.first<<"->";
            for(auto j: i.second){
                cout << j.second << ",";
            }
            cout<<endl;
        }
        return 0;
     }
};

    int main(){

        cout<<"hello world in cpp"<<endl;
int n;
  cout << "enter the number of nodes" << endl;
  cin >> n;

  int m;
  cout << "enter the number of edgs" << endl;
  cin >> m;
  
    graph g;
    
  for (int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;
    g.addAdj(u, v, 0);
  }

g.printAdj();

        return 0;
    }