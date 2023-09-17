/* --------------- Why we use array ---------------------
�����ս��� �߿��� ���� ���ø����̼ǿ����� ���Ͱ� ������ �ִ� �������� ������ �����ϴ�.
1. ������ �Ҹ��� �ϴµ� ��� ����� ����ġ �ʽ��ϴ�. �� �������� Ư��
   ����ؾ� �ϴ� ������ ���� ������ �������� �����մϴ�.
2. ���ο� element�� �Ҵ�� ��Ÿ�ӿ� �����մϴ�. ���Ͱ� �����迭�̱� ������
   �ʹ����� �翬�� �̾߱�������, ���� �����ս����� ������ ������ ��Ĩ�ϴ�.
3. ���� ��ü�� ��κ��� ��� 32 ����Ʈ�� �����ϹǷ� �޸𸮸� ��ȿ�������� ����ϰ� �˴ϴ�.
4. �������� �����ϰų� �����ϴ� ��� ���ʿ��� ���Ͱ� ���簡 �Ͼ�ϴ�.
   (�� �κ��� C++11 ���� move semantics ��� ���信 ���� �غ��Ǿ����ϴ�.)

   ������ �迭�� ������ ����� ���Ϳ��� �߻��ϴ� �߰��� �꼱��(�������)�� �����ϴ�.
   ������Ÿ�ӿ� �̸� �� ����� �����ϱ� ������ ����� ���� ���� ����.
   �׷��� ���Ͱ� �������� ������ �翬�� �����ؾ� �մϴ�.
   �迭 ���� �� ù��° ���Ҹ� ����Ű�� �����ͷ� �������� ����ȯ�� ���ǹǷ�,
   ���Ȼ��� ���� ���� �ֽ��ϴ�.

   �̷� ������ �ذ��ϱ� ���� C++11������ ������ �����̳ʿ� �����ϸ鼭 ������ �迭��
   �����ϱ� ���� array �� ä�õǾ����ϴ�.
   �̸� ���� ������ ������ �״�� ���ϴ� ����, ������ ũ���� ���� �迭�� ���� �� �ֽ��ϴ�.

   array�� ���� �� ��� �ϳ��� ���Ϳ����� ���� ����ð��� random  access �� �����մϴ�.
   ����, �޸� ���鿡�� �� ��, ���Ͱ� free-store ��� �Ҹ���� ������ ������Ʈ��
   �񿬼������� ��ġ�Ͽ� ����ϴ� �Ͱ��� �ٸ��� array�� ���� ������
   ���������� ������Ʈ�� ��ġ�մϴ�. ���� array �� ������, �Ҹ���, ���������,
   ���Կ����ڸ� �����մϴ�. C++11 ǥ������ ���ε� array �� ����� ���ô�.

*/

#include <bits/stdc++.h>
using namespace std ;

int main() {
    array <int,    5> a1   { {14, 2, 5, 7, 23} };      // double-braces required
    array <int,    3> a2 = { 11, 22, 33};    // except after =
    array <string, 4> a3 = { {string("a"), "b", "PNU", "Beer"}  };

    sort(a1.begin(), a1.end());
    reverse_copy(a2.begin(), a2.end(), ostream_iterator<int>(cout, "---"));

    // ranged for loop is supported
    for(auto& s: a1) cout << "\n a1 s = " <<  s << ' ';
    for(auto& s: a2) cout << "\n a2 s = " <<  s << ' ';
    for(auto& s: a3) cout << "\n a3 s = " <<  s << ' ';

    cout << "\n ������ �������ϴ�. \n" ;
}