#include<iostream>
#include<vector>

using namespace std;

typedef vector<int> vi;
typedef vector<vi> mi;

// void display(mi& m) {
//     for (int i = 0; i < m.size(); i++) {
//         for (int j = 0; j < m[i].size(); j++) {
//             cout << m[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

void display(mi& m) {
    for (auto x : m) { // takes 1st element of each column
        for (auto y : x) { // takes 2nd element of each column
            cout << y << " "; // ends up printing the matrix
        }
        cout << endl;
    }
}

void coloring(mi& m, int i, vi& color);

int main() {
    int n = 4; // number of elements in the color vector
    mi m = { // pre-defining a matrix (can also prompt the user to enter it)
        { 0,1,1,0 },
        { 1,0,1,0 },
        { 1,1,0,1 },
        { 0,0,1,0 }
    };

    display(m);

    vi color(n, -1); // creating the color vector of n elements, each being -1

    for (int i = 0; i < m.size(); i++) { // in this example, m.size() = 4 so coloring from 0 to 3
        coloring(m, i, color); // colors each vertex of the graph. // SO: coloring(m, 0, color); coloring(m, 1, color); coloring(m, 2, color); coloring(m, 3, color);
    }

    // after all the above in this case, vi color becomes = {0, 1, 2, 0}
    int xi = 0;
    int max = 0;

    for (auto x : color) { // take each value from color (0, 1, 2, 0) one after the other
        if (x > max) {
            max = x; // searches for the biggest color (in this case, 2)
        }
    }

    xi = max + 1; // xi = 2 + 1 in this case (so 3), add one since colors start from index 0 not 1 (distinct colors: 0, 1, 2)

    cout << "xi= " << xi << '\n';

    // below, prints color vector
    for (auto x : color) {
        cout << x << " " << '\n'; 
    }

    return 0;
}

void coloring(mi& m, int i, vi& color) { // i is the vertex to color, vi& color is the vector that stores the aligned colors
    bool valid;
    for (int k = 0; k < m.size(); k++) { // checks whether each color (from 0 to 3) can be used for vertex i (doesnt assign color yet)
        valid = true; // assumes color k is valid
        for (int j = 0; j < m.size(); j++) { // checks vertex j to see if its connected to vertex i
            if (m[i][j] != 0 && color[j] == k) {  // checks if i is connected to j && if j already has color we're trying to use
                // if both conditions above are true, color cant be assigned to vertex i and the if loop is exited from
                valid = false; 
                break; 
            }
        }
        if (valid) { // checks if no neighbor has color k
            color[i] = k;// assigns the color k to vertex i
            return; // exits the entire function (algorithm stops as soon as it finds the first valid color and doesnt keep searching for a better color)
        }
    }
}
