class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
 int n = arr.size();
   for (int i = 0; i < n; i++) {
 int count1 = 0;

            // Count arr[i] how many time occur
            for (int j = 0; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count1++;
                }
            }

            //compare with another elements
            for (int k = i + 1; k < n; k++) {

                int count2 = 0;

               // count 
                for (int j = 0; j < n; j++) {
                    if (arr[k] == arr[j]) {
                        count2++;
                    }
                }

                if (arr[i] != arr[k] && count1 == count2) {
                    return false;
                }
            }
     }
        return true;  }
};