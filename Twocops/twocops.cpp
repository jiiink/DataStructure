#include <iostream>
#include <vector>
using namespace std;


int numOfPoints = 0;
int t = 0;
vector<pair<int, int> > points;
int crash_count = 0;
int c1_index = 0;
int c2_index = 0;
pair<int, int> c1, c2;


void output() {
    // cout << "crash : " << crash_count << endl;

    // cout << "result" << endl;
    if (crash_count % 2) { // when crash_count is odd
        cout << points[c2_index].first << " " << points[c2_index].second << endl;
        cout << points[c1_index].first << " " << points[c1_index].second << endl;
    } else {
        cout << points[c1_index].first << " " << points[c1_index].second << endl;
        cout << points[c2_index].first << " " << points[c2_index].second << endl;
    }
}



void run_robo() {
    
    // cout << c2_index << endl;
    t %= points.size();
    // cout << t << endl;
    
    

    for (int i=0; i<t; i++) {
        c1_index++;
        c2_index--;

        // c1_index %= points.size();
        if (c2_index < 0) {
            c2_index = points.size() - 1;
        }

        c1 = points[c1_index];
        c2 = points[c2_index];
        // cout << "c1 : " << c1.first << " " << c1.second << endl;
        // cout << "c2 : " << c2.first << " " << c2.second << endl;
        if (c1 == c2 || points[c1_index - 1] == c2) {
            crash_count++;
        }
    }
    output();
}

void make_route() {
    points.push_back(points[0]);
    int k = 0;
    int j = 0;
    for (int i=0; i<numOfPoints+1; i++) {
        int m = 0;
        pair<int, int> before = points[k];
        pair<int, int> after = points[k+1];
        
        if (before.first == after.first) { // same x
            j = k;
            if (before.second < after.second) {
                while (before.second++ != after.second-1) {
                    points.insert(points.begin()+j+1, before);
                    j++;
                    m++;
                }
            } else {
                while (before.second-- != after.second+1) {
                    points.insert(points.begin()+j+1, before);
                    j++;
                    m++;
                }
            }
        } else if (before.second == after.second) {// same y
            j = k;
            if (before.first < after.first) {
                while (before.first++ != after.first-1) {
                    points.insert(points.begin()+j+1, before);
                    j++;
                    m++;
                }
            } else {
                while (before.first-- != after.first+1) {
                    points.insert(points.begin()+j+1, before);
                    j++;
                    m++;
                }
            }
        }
        k += (m+1);
    }
    points.pop_back();
}

void generate_point(int x, int y) {
    points.emplace_back(x, y);
}

void input() {
    
    cin >> numOfPoints;
    
    string line;
    for (int i=0; i<numOfPoints; i++) {
        // getline(cin, line);
        int x, y;
        cin >> x >> y;
        // print_point(x, y);
        generate_point(x, y);
    }
    
    // cout << "numofpoints : " << numOfPoints << endl;
    cin >> t;
    // cout << "time : " << t << endl;
}


int main() {
    input();

    
    // cout << "c1 : " << points[c1_index].first << " " << points[c1_index].second << endl;
    // cout << "c2 : " << points[c2_index].first << " " << points[c2_index].second << endl;
    c2 = points[numOfPoints / 2 - 1];
    make_route();
    for (int i=0; i<points.size(); i++) {
        if (c2 == points[i]) {
            c2_index = i;
            break;
        }
    }
    // cout << "c1 : " << points[c1_index].first << " " << points[c1_index].second << endl;
    // cout << "c2 : " << points[c2_index].first << " " << points[c2_index].second << endl;
    run_robo();
    // for (auto& point : points) {
    //     cout << point.first << " " << point.second << endl;

    // process();
    // output();
    return 0;
}

//부딪혔을 때 굳이 방향 바꾸지 말고, 부딪혔다는 값을 저장하고 나중애 출력할 때 바꿔주면 되잖아
//홀수 번 부딪히면 출력을 바꿔주고, 짝수 번이면 그대로 출력한다.
//두 로봇 좌표가 같으면 카운트 + 1 해주고
//c1의 이전 값과 c2의 현재 값이 같으면 카운트 + 1 한다.