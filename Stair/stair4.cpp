#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <utility>
using namespace std;

class Edge {
    public:
        pair<int, int> down;
        pair<int, int> up;
        Edge() {}
        Edge(pair<int, int> down, pair<int, int> up) : down(down), up(up) {}

};

int main() {
    fstream myfile;
    myfile.open("test.txt", ios::in);
    string line;

    int number, i = 0;
    vector<int> numbers_x, numbers_y;
    vector<int> numbers;

    getline(myfile, line);
    istringstream iss(line);

    while (iss >> number) {
        if (number) {
            if (i % 2 == 0) {
                numbers_x.push_back(number);
            } else {
                numbers_y.push_back(number);
            }
        }
        // numbers.push_back(number);
        i++;
    }


    vector<Edge> edges;
    vector< pair<int, int> > up_edges;
    vector< pair<int ,int> > down_edges;
    for (int i=0; i<numbers_x.size(); i++) {
        int x = 0;
        int y = 0;
        int down_y = 0;
        for (int j=0; j<=i; j++) {
            x += numbers_x[j];
        }
        for (int k=numbers_y.size(); k>i; k--) {
            y += numbers_y[k-1];
        }
        for (int l=numbers_y.size(); l>i+1; l--) {
            down_y += numbers_y[l-1];
        }

        edges.emplace_back(make_pair(x, down_y), make_pair(x, y));
    }


    vector< pair<int, int> > points;
    while (getline(myfile, line)) {
        int x, y;
        istringstream iss(line);
        iss >> x;
        iss >> y;

        points.push_back(make_pair(x, y));
    }

    
    for (auto& point : points) {
        for (auto& edge : edges) {
            if (point.first == edge.up.first) {
                if (point.second <= edge.up.second && point.second >= edge.down.second) {
                    cout << "on" << endl;
                    break;
                }
            }

            if (point.first < edge.up.first) {
                if (point.second < edge.up.second) {
                    cout << "in" << endl;
                    break;
                } else if (point.second > edge.up.second) {
                    cout << "out" << endl;
                    break;
                } else {
                    cout << "on" << endl;
                    break;
                }
            }
        }
    }

    myfile.close();

    return 0;
}