class Solution {
public:
    int removeDuplicates(vector<int>& array)
    {
        int n = array.size();
        if (n == 0)  return 0;
        int index = 1;
        
        for (int i = 0; i < n - 1; i++)
        {
            if (array[i] != array[i+1])
                array[index++] = array[i + 1];
        }
        
        return index;
    }
};