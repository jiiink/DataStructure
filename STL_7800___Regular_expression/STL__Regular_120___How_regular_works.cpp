#include <iostream>
#include <regex>
#include <string>

using namespace std ;

int main() {
    regex pattern(R"(<(.+)>(.*?)</\1>)");
    string target = "<b>Bold</b>, not bold, <b>bold again</b>.";

    cout << boolalpha;		  // print true/false instead of 1/0
    cout << regex_match(target, pattern) << "\n\n";           // false

    {
        smatch results;
        auto begin = target.cbegin(), end = target.cend();
        while (regex_search(begin, end, results, pattern)) {
            cout << results.str(2) << '\n';      // "Bold", then "bold again"
            begin += results.length();
        }
    }


    {
        sregex_iterator begin(target.cbegin(), target.cend(), pattern),
                        end;    // default constructor creates end-iterator
        for_each(begin, end, [](auto& results) {    /* const smatch& */
            cout << results.str(2) << '\n';
        });
    }


    {
        sregex_token_iterator beg(target.cbegin(), target.cend(), pattern, 2),
                              end;  // default constructor creates end-iterator
        for_each(beg, end, [](auto& subMatch) {  /* const ssub_match& */
            cout << subMatch << '\n';
        });
    }


    cout << endl;
}
