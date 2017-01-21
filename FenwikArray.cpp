//
// Created by Christoffer on 1/21/2017.
//

#include <vector>

class FenwikArray {
public:
    FenwikArray(const std::vector<int> &m_array) : m_array(m_array) {}

    int prefix(int index) {
        int result = 0;

        for (int i = 0; i <= index; i++) {
            result += m_array[i];
        }

        return result;
    }

    void update(int index, int add) {
        m_array[index] += add;
    }

private:
    std::vector<int> m_array;
};