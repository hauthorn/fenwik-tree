#include <vector>

//
// Created by Christoffer on 1/21/2017.
//
class FenwikTree {
public:
    FenwikTree(const std::vector<int> &array) {
        m_array = std::vector<int>(1 + array.size());

        // Create the array using updates. A linear approach exists
        // Runtime n * log(n)
        for (int i = 0; i < array.size(); ++i) {
            update(i, array[i]);
        }
    }

    int prefix(int index) {
        int result = 0;

        for (++index; index > 0; index -= index & -index) {
            result += m_array[index];
        }

        return result;
    }

    void update(int index, int add) {
        for (++index; index < m_array.size(); index += index & -index) {
            m_array[index] += add;
        }
    }

private:
    std::vector<int> m_array;
};
