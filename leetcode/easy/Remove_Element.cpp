class Solution {
public:
    int removeElement(vector<int>& array, int val)
    {
        int n = array.size();

        if (n == 0)
            return 0;

        int index = 0;

        for (int i = 0; i < n; i++)
            if (array[i] != val)
                array[index++] = array[i];

        return index;
    }
};