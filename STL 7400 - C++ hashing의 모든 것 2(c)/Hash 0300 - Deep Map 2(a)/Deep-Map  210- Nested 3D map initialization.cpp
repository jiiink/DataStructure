// map을 CodeBlock에서 사용하려면 반드시 Comipler에서 C+11 을 check해야 합니다.
#include <bits/stdc++.h>
using namespace std ;

int main() {

    map< int, map<int, string>> level2map = {
        {0, { {0, "zero"}, {1, "one"}, {2, "two"  } } },
        {1, { {0, "Ein"},  {1, "Zwei"}, {2, "Drei"} } },
        {3, { {1, "하나"}, {2, "둘"},   {3, "셋"  } } }
    };

    auto it= level2map.begin() ;


    return 0;
}
