#include <vector>

using namespace std;

typedef vector<int> vi;
typedef vector<vi> Matrix;  // typedef vector<vi> AdjList;

bool IsBipartite(Matrix &M) { // bool IsBipartite(AdjList &adj) {
    int n = M.size(); // int n = adj.size();
    vi color(n, -1); // -1 = uncolored, 0 and 1 = the two partitions

    for (int start = 0; start < n; ++start) {
        if (color[start] != -1) 
            continue;
        
        color[start] = 0;
        bool changed = true;
        while (changed) {
            changed = false;
            for (int i = 0; i < n; ++i) {
                if (color[i] == -1) 
                    continue;
                
                for (int j = 0; j < n; ++j) { // for (int j = 0; j < adj[i].size(); ++j) {
                    if (M[i][j] == 1) { // int neighbor = adj[i][j]; // no 'if' needed
                        if (color[j] == -1) { // if (color[neighbor] == -1) {
                            color[j] = 1 - color[i]; // color[neighbor] = 1 - color[i];
                            changed = true;
                        } 
                        else if (color[j] == color[i]) { // else if (color[neighbor] == color[i]) {
                            return false; // Same-color edge or self-loop
                        }
                    } // (no closing brace from M[i][j] == 1)
                }
            }
        }
    }

    return true;
}
