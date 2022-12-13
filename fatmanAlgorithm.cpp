#include <vector>

int findMaxWeightIndex(const std::vector <int>& fatmans) {
    int max = INT_MIN, index;

    for (std::size_t i = 0; i < fatmans.size(); ++i) {
        if (fatmans[i] > max) {
            max = fatmans[i];
            index = (int) i;
        }
    }

    return index;
}

int fatmanAlgorithm(const std::vector<int>& fatmans, const int& indexOfWeakChair) {
    int counter = 0;
    int maxWeight = fatmans[findMaxWeightIndex(fatmans)];
    int marker = indexOfWeakChair - 1; //Номер стула указывается "для людей". Вычитаем единицу, чтобы перевести на язык машины.

    while (true) {
        if (fatmans[marker] == maxWeight) {
            break;
        }

        --marker;
        ++counter;

        if (marker < 0) {
            marker = (int) fatmans.size() - 1;
        }
    }

    return counter;
}