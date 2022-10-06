// Importing libraries 

#include <iostream> 
#include <algorithm>
#include <unordered_map>
#include <queue> 
#include <vector> 
#include <string>

// To make it faster to write up the code 
using namespace std;

// Graph given in problem statement as a map of int and vector of ints
unordered_map<int, vector<int>> graph = {
    {1, {6}},
    {2, {6}}, 
    {3, {4, 5, 6, 15}},
    {4, {3, 5, 6}},
    {5, {3, 4, 6}},
    {6, {1, 2, 3, 4, 5, 7}}, 
    {7, {6, 8}},
    {8, {7, 9}},
    {9, {8, 10, 12}},
    {10, {9, 11}},
    {11, {10, 12}},
    {12, {9, 11, 13}},
    {13, {12, 14, 15}},
    {14, {13}},
    {15, {3, 13}},
    {16, {17, 18}},
    {17, {16, 18}},
    {18, {16, 17}}
};

// Function to determine friends of friends 
int fof(int x){
    int counter = 0; 
    vector<int> counted; 
    
    // Simply iterate over graph and increase a counter as more friends are found
    for (auto i = graph[x].begin(); i != graph[x].end(); i ++){
        for (auto j = graph[*i].begin(); j != graph[*i].end(); j ++){
            if (*j != x && find(counted.begin(), counted.end(), *j) == counted.end() && find(graph[x].begin(), graph[x].end(), *j) == graph[x].end()){
                counter ++; 
                counted.push_back(*j);
            }
        }
    }

    return counter; 
}

// BFS algorithm to find the distance between two people 
int dos (int x, int y){
    unordered_map<int, int> visited; 
    queue<int> q; 

    q.push(x);
    visited[x] = -5; // Arbitrary value < 0, could be anything else 

    int current = 0;
    int counter = 0;  

    while (q.size() != 0){
        current = q.front();
        q.pop();

        int val = current; 

        if (current == y){
            while (val != -5){
                if (val != x){
                    counter ++; 
                }
                val = visited[val]; 
            }
        }else{
            for (auto i = graph[current].begin(); i != graph[current].end(); i++){
                if (visited.find(*i) == visited.end()){
                    q.push(*i);
                    visited[*i] = current; 
                }
            }
        }
    }
    return counter;
}

int main()
{
    string inp; int x, y; // Take input 
    while (inp != "q"){ // Run until input is quit
        cin >> inp; 
        
        // Perform tasks based on the input 
        if (inp == "i"){ // Insert
            cin >> x >> y; 
            
            // Bidirectional graph - insert it to x and y
            if (find(graph[x].begin(), graph[x].end(), y) == graph[x].end()){
                graph[x].push_back(y); 
                graph[y].push_back(x); 
            }
        }
        else if (inp == "d"){ // Delete
            cin >> x;
            cin >> y;
            graph[x].erase(remove(graph[x].begin(), graph[x].end(), y), graph[x].end());
            graph[y].erase(remove(graph[y].begin(), graph[y].end(), x), graph[y].end()); 
        }
        else if (inp == "n"){ // Number of friends
            cin >> x;
            cout << graph[x].size() << endl;  
        }
        else if (inp == "f"){ // Friends of friends
            cin >> x;
            cout << fof(x) << endl;
        }
        else if (inp == "s"){ // Degree of seperation
            cin >> x;
            cin >> y;
            
            int g = dos(x,y);
            if (g == 0){
                cout << "Not connected" << endl; 
            }else{
                cout << g << endl; 
            }
        }
    }

    return 0;
}
