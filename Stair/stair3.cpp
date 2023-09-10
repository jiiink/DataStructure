#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
using namespace std;

class Down_edge {
    public:
        int x, y;
        Down_edge() {}
        Down_edge(int x, int y) : x(x), y(y) {}
};

class Up_edge {
    public:
        int x, y;
        Up_edge() {}
        Up_edge(int x, int y) : x(x), y(y) {}
};

class Edge {
    public:
        int x, y;
        Down_edge down;
        Up_edge up;
        Edge() {}
        Edge(int x, int y) : x(x), y(y) {}
        Edge(Down_edge down, Up_edge up) : down(down), up(up) {}

};
 
class Point {
    public:
        int x, y;
        string position = "";
        Point() {}
        Point(int x, int y) : x(x), y(y) {}
};

int main() {
    fstream myfile;
    myfile.open("test2.txt", ios::in);
    string line;

    int number;
    vector<int> numbers;
    vector<int> numbers_x;
    vector<int> numbers_y;

    getline(myfile, line);
    istringstream iss(line);

    while (iss >> number) {
        if (number) {
            numbers.push_back(number);
        }
    }

    int i = 0;
    for (auto& number : numbers) {
        if (i % 2 == 0) {
            numbers_x.push_back(number);
        } else {
            numbers_y.push_back(number);
        }
        i++;
    }

    vector<Up_edge> up_edges;
    vector<Down_edge> down_edges;
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
        Up_edge up_edge(x, y);
        Down_edge down_edge(x, down_y);
        up_edges.push_back(up_edge);
        down_edges.push_back(down_edge);
    }


    vector<Edge> edges;
    for (int i=0; i<up_edges.size(); i++) {
        Edge edge(down_edges[i], up_edges[i]);
        edges.push_back(edge);
    }



    vector<Point> points;
    while (getline(myfile, line)) {
        int x, y;
        istringstream iss(line);
        iss >> x;
        iss >> y;

        Point point(x, y);
        points.push_back(point);
    }

    
    for (auto& point : points) {
        for (auto& edge : edges) {
            if (point.x == edge.up.x) {
                if (point.y == edge.up.y) {
                    point.position = "on";
                    break;
                } else if (point.y > edge.up.y) {
                    point.position = "out";
                    break;
                } else if (point.y >= edge.down.y) {
                    point.position = "on";
                    break;
                }

            }

            if (point.x < edge.up.x) {
                if (point.y < edge.up.y) {
                    point.position = "in";
                    break;
                } else if (point.y > edge.up.y) {
                    point.position = "out";
                    break;
                } else if (point.y == edge.up.y) {
                    point.position = "on";
                    break;
                }
            }
        }
    }



    for (auto& point : points) {
        cout << point.position << endl;
    }

    myfile.close();

    return 0;
}