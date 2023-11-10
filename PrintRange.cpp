#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

template<typename Iterator>
void PrintRange(Iterator container_begin, Iterator container_end) {
    for (auto it = container_begin; it != container_end; ++it) {
        cout << *it << " "s;
    }
    cout << endl;
}

template <typename Container, typename Element>
void FindAndPrint(Container container, Element element) {
    auto pos = find(container.begin(), container.end(), element);
    PrintRange(container.begin(), pos);
    PrintRange(pos, container.end());
}

int main() {
    set<int> test = {1, 1, 1, 2, 3, 4, 5, 5};
    cout << "Test1"s << endl;
    FindAndPrint(test, 3);
    cout << "Test2"s << endl;
    FindAndPrint(test, 0); // элемента 0 нет в контейнере
    cout << "End of tests"s << endl;
}
