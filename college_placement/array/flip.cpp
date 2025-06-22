#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


/*
 * Complete the 'getMaximumXORFrequency' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY arr
 *  2. INTEGER val
 */
int getMaximumXORFrequency(vector<int> arr, int val) {
    int n = arr.size();
    int maxFreq = count(arr.begin(), arr.end(), val);  // Initial frequency of val
    
    // Traverse over every possible subarray
    for (int left = 0; left < n; ++left) {
        int xorSum = 0;  // XOR value for the subarray [left, right]

        for (int right = left; right < n; ++right) {
            xorSum ^= arr[right];  // Calculate XOR for current subarray
            
            // Create a copy of the array to apply the XOR to the subarray
            vector<int> temp = arr;
            for (int i = left; i <= right; ++i) {
                temp[i] ^= xorSum;  // Apply the XOR to the subarray
            }

            // Count the occurrences of 'val' in the transformed array
            int freq = count(temp.begin(), temp.end(), val);
            maxFreq = max(maxFreq, freq);  // Update the max frequency
        }
    }

    return maxFreq;
}


  

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string arr_count_temp;
    getline(cin, arr_count_temp);

    int arr_count = stoi(ltrim(rtrim(arr_count_temp)));

    vector<int> arr(arr_count);

    for (int i = 0; i < arr_count; i++) {
        string arr_item_temp;
        getline(cin, arr_item_temp);

        int arr_item = stoi(ltrim(rtrim(arr_item_temp)));

        arr[i] = arr_item;
    }

    string val_temp;
    getline(cin, val_temp);

    int val = stoi(ltrim(rtrim(val_temp)));

    int result = getMaximumXORFrequency(arr, val);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
