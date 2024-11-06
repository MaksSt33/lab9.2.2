#include <iostream>
#include <vector>
#include <cstdarg>
#include <algorithm>

using namespace std;

// ������ ��� ��������� ������ � �����, ��������� �� ���������
#define SORT_NUMBERS(...) sortNumbers({__VA_ARGS__})

// ������� �������� ����������
void quickSort(vector<int>& arr, int left, int right) {
    if (left >= right) return;

    int sor = arr[(left + right) / 2];
    int i = left;
    int j = right;

    while (i <= j) {
        while (arr[i] < sor) i++;
        while (arr[j] > sor) j--;

        if (i <= j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    if (left < j) quickSort(arr, left, j);
    if (i < right) quickSort(arr, i, right);
}

// ������� ��� ������� ����� � ���������� ������������� ������
vector<int> sortNumbers(vector<int> numbers) {
    quickSort(numbers, 0, numbers.size() - 1);
    return numbers; // ��������� ������������ ������
}

int main() {
    cout << "Numbers: 10 3 15 7 8 23 74 18 " << endl;
    vector<int> sorted = SORT_NUMBERS(10, 3, 15, 7, 8, 23, 74, 18);

    // ��������� ������������� ������
    cout << "Sorted numbers: ";
    for (int num : sorted) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
