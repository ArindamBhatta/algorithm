#include <iostream>
#include <vector>
#include <climits>
#include <algorithm> 
using namespace std;

void findLeader(const vector<int>& arr){
    for (int i = 0; i < arr.size(); i++)
    {
      bool isLeader = true;

      for (int j = 0; j < arr.size(); j++)
      {
            if (arr[i] <= arr[j])
            {
                isLeader = false;
                break;
            }
            if(isLeader == true)
            {
                cout << arr[i] <<endl;
            }
        }
    }
    
}


void findLeaderOpt(const vector<int>& arr) {
    int maxValue = INT_MIN;
    vector<int> leaderArray;

    // Traverse from right to left
    for (int i = arr.size() - 1; i >= 0; --i) {
        if (arr[i] > maxValue) {
            leaderArray.push_back(arr[i]);
            maxValue = arr[i];
        }
    }

    // Optional: reverse to maintain original left-to-right order of leaders
    reverse(leaderArray.begin(), leaderArray.end());

    // Print the leaders
    cout << "Leaders: ";
    for (int leader : leaderArray) {
        cout << leader << " ";
    }
    cout << endl;
}

int main() {
    vector<int> numbers = {10, 22, 12, 3, 0, 6};
    findLeaderOpt(numbers);
    return 0;
}
