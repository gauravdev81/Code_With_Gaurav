#include <iostream>
#include <vector>

using namespace std;

// Function to find the Player of the Year based on performance data
int playerOfTheYear(int performanceData[][],int N,int M) {
    int N = performanceData.size(); // Number of players
    int M = performanceData[0].size(); // Number of data points per player
    //string player = ""; // Variable to store the Player of the Year
    int longestTimeAtTop = 0; // Variable to store the longest time at the top

    int ans;

    for (int i = 0; i < N; i++) {
        int currentTimeAtTop = 0; // Variable to store the current time at the top
        for (int j = 0; j < M; j++) {
            bool isTop = true;
            for (int k = 0; k < N; k++) {
                if (k != i && performanceData[k][j] >= performanceData[i][j]) {
                    isTop = false;
                    break;
                }
            }
            if (isTop) {
                currentTimeAtTop++;
            }
            else {
                if (currentTimeAtTop > longestTimeAtTop) {
                    longestTimeAtTop = currentTimeAtTop;
                    ans = i + 1;
                }
                currentTimeAtTop = 0;
            }
        }
        if (currentTimeAtTop > longestTimeAtTop) {
            longestTimeAtTop = currentTimeAtTop;
            ans = i + 1;
        }
    }

    return ans;
}

int main() {
    int N, M;
    cout << "Enter the number of players: ";
    cin >> N;
    cout << "Enter the number of data points per player: ";
    cin >> M;

    int performanceData[N][M];

    cout << "Enter the performance data for each player: " << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> performanceData[i][j];
        }
    }

    int playerOfTheYearName = playerOfTheYear(performanceData,N,M);
    cout << "Player of the Year: " << playerOfTheYearName << endl;

    return 0;
}