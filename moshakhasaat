#include <iostream>
using namespace std;
int findMaxElement(int arr[], int size) {
    int maxElement = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    return maxElement;
}
int findMinElement(int arr[], int size) {
    int minElement = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < minElement) {
            minElement = arr[i];
        }
    }
    return minElement;
}
struct Person {
    string name;
    string lastname;
    int age;
};

int main() {
    int size1, size2;

    cout << "Enter the size of the first array: ";
    cin >> size1;
    int* arr1 = new int[size1];
    cout << "Enter the elements of the first array: ";
    for (int i = 0; i < size1; i++) {
        cin >> arr1[i];
    }

    int maxElement = findMaxElement(arr1, size1);
    cout << "The maximum element in the first array is: " << maxElement << endl;

    cout << "\nEnter the size of the second array: ";
    cin >> size2;
    int* arr2 = new int[size2];
    cout << "Enter the elements of the second array: ";
    for (int i = 0; i < size2; i++) {
        cin >> arr2[i];
    }

    int minElement = findMinElement(arr2, size2);
    cout << "The minimum element in the second array is: " << minElement << endl;

    delete[] arr1;
    delete[] arr2;
    int numPeople = 0;
    int totalAge = 0;
    cout << "Enter the number of people: ";
    cin >> numPeople;
    for (int i = 0; i < numPeople; ++i) {
        cout << "\nEnter details for person " << i + 1 << ":" << endl;

        cout << "Name: ";
        cin >> people[i].name;

        cout << "Lastname: ";
        cin >> people[i].lastname;

        cout << "Age: ";
        cin >> people[i].age;

        totalAge += people[i].age;
    }

    double averageAge = static_cast<double>(totalAge) / numPeople;

    cout << "\nThe average age of the entered people is: " << averageAge << endl;
    return 0;
}