
#include <vector>

int main(){
    std::vector <int> vi {1,2,3,4,5,6,7};

    for( auto it=vi.begin(); it !=vi.begin(); ++it)
        *it +=1;
    return(0);
}
