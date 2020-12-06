#include <set>

// sort predicate must be a class of generic type
template <typename D>
struct descending {
    bool operator() (const D& lhs, const D& rhs) const { return (lhs < rhs); }
};

int main()
{
    // simple instantiation
    std::set<int> integers;
    std::multiset<double> doubles;

    // instantiating with sort predicate
    std::set<int, descending<int>> sortedInt;
    std::multiset<double, descending<double>> sortedDouble;

    return 0;
}
