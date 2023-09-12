#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <vector>
using namespace std;

void run_robo(vector< pair<int, int> >& points) {
    pair<int, int> start_point;
    start_point = points[0];
    // cout << "start point" << endl;
    // cout << start_point.first << " " << start_point.second << endl;
    points.push_back(points[0]);
    int k = 0;
    int j = 0;
    for (int i=0; i<13; i++) {
        int m = 0;
        // cout << points.size() << endl;
        int before_x = points[k].first;
        int before_y = points[k].second;
        int after_x = points[k+1].first;
        int after_y = points[k+1].second;
        
        if (before_x == after_x) {
            // before_y++;
            j = k;
            if (before_y < after_y) {
                while (before_y != after_y-1) {
                    cout << ".";
                    before_y++;
                    // pair<int, int> point = make_pair(before_x, before_y);
                    // cout << point.first << " " << point.second << endl;
                    points.insert(points.begin()+j+1, make_pair(before_x, before_y));
                    j++;
                    m++;
                }
            } else if (before_y > after_y) {
                while (before_y != after_y+1) {
                    cout << ".";
                    before_y--;
                    // pair<int, int> point = make_pair(before_x, before_y);
                    // cout << point.first << " " << point.second << endl;
                    points.insert(points.begin()+j+1, make_pair(before_x, before_y));
                    j++;
                    m++;
                }
            }
        } else if (before_y == after_y) {
            j = k;
            if (before_x < after_x) {
                while (before_x != after_x-1) {
                    cout << ".";
                    before_x++;
                    points.insert(points.begin()+j+1, make_pair(before_x, before_y));
                    j++;
                    m++;
                }
            } else if (before_x > after_x) {
                while (before_x != after_x+1) {
                    cout << ".";
                    before_x--;
                    points.insert(points.begin()+j+1, make_pair(before_x, before_y));
                    j++;
                    m++;
                }
            }
        }
        k += (m+1);
        cout << "K : " << k << endl;
    }
    for (auto& point : points) {
        cout << point.first << " " << point.second << endl;
    }
    // std::cout << robo_point.first << " " << robo_point.second << endl;
}

void generate_point(vector< pair<int, int> >& points, int x, int y) {
    // vector< pair<int, int> > points;
    // pair<int, int> point;

    // point = make_pair(x, y);
    points.push_back(make_pair(x, y));
    // cout << "Generate" << endl;
    // cout << point.first << " " << point.second << endl;
    // run_robo(points);
}

void input(vector< pair<int, int> >& points) {
    fstream myfile;
    myfile.open("test.txt", ios::in);
    if (myfile.is_open()) {
        string line;
        getline(myfile, line);
        istringstream iss(line);
        int numOfPoints;
        iss >> numOfPoints;
        // cout << numOfPoints << endl;
        for (int i=0; i<numOfPoints; i++) {
            getline(myfile, line);
            istringstream iss(line);
            int x, y;

            iss >> x >> y;
            // cout << x << " " << y << endl;
            generate_point(points, x, y);
        }
        getline(myfile, line);
        istringstream is(line);
        for (int i=0; i<5; i++) {
            int t;
            is >> t;
            // cout << t << endl; 
        }

    }
    myfile.close();
}



void output() {

}

int main() {

    // vector< pair<int, int> > test_points;
    // test_points.push_back(make_pair(3, 3));
    // test_points.push_back(make_pair(3, 7));
    // test_points.push_back(make_pair(7, 7));
    // test_points.push_back(make_pair(7, 10));
    // test_points.push_back(make_pair(11, 10));
    // test_points.push_back(make_pair(11, 6));
    // test_points.push_back(make_pair(15, 6));
    // test_points.push_back(make_pair(15, 1));
    // test_points.push_back(make_pair(9, 1));
    // test_points.push_back(make_pair(9, 5));
    // test_points.push_back(make_pair(6, 5));
    // test_points.push_back(make_pair(6, 3));
    // test_points.push_back(make_pair(3, 3));
    // int k = 0;
    // int j = 0;
    // for (int i=0; i<13; i++) {
    //     int m = 0;
    //     // cout << points.size() << endl;
    //     int before_x = test_points[k].first;
    //     int before_y = test_points[k].second;
    //     int after_x = test_points[k+1].first;
    //     int after_y = test_points[k+1].second;
        
    //     if (before_x == after_x) {
    //         // before_y++;
    //         j = k;
    //         if (before_y < after_y) {
    //             while (before_y != after_y-1) {
    //                 cout << ".";
    //                 before_y++;
    //                 // pair<int, int> point = make_pair(before_x, before_y);
    //                 // cout << point.first << " " << point.second << endl;
    //                 test_points.insert(test_points.begin()+j+1, make_pair(before_x, before_y));
    //                 j++;
    //                 m++;
    //             }
    //         } else if (before_y > after_y) {
    //             while (before_y != after_y+1) {
    //                 cout << ".";
    //                 before_y--;
    //                 // pair<int, int> point = make_pair(before_x, before_y);
    //                 // cout << point.first << " " << point.second << endl;
    //                 test_points.insert(test_points.begin()+j+1, make_pair(before_x, before_y));
    //                 j++;
    //                 m++;
    //             }
    //         }
    //     } else if (before_y == after_y) {
    //         j = k;
    //         if (before_x < after_x) {
    //             while (before_x != after_x-1) {
    //                 cout << ".";
    //                 before_x++;
    //                 test_points.insert(test_points.begin()+j+1, make_pair(before_x, before_y));
    //                 j++;
    //                 m++;
    //             }
    //         } else if (before_x > after_x) {
    //             while (before_x != after_x+1) {
    //                 cout << ".";
    //                 before_x--;
    //                 test_points.insert(test_points.begin()+j+1, make_pair(before_x, before_y));
    //                 j++;
    //                 m++;
    //             }
    //         }
    //     }
    //     k += (m+1);
    //     cout << "K : " << k << endl;
    // }
    // for (auto& point : test_points) {
    //     cout << point.first << " " << point.second << endl;
    // }



    vector< pair<int, int> > points;
    input(points);
    // generate_point(); // In input()
    run_robo(points);       
    output();

    return 0;
}