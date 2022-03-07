class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>v(n+m);
        int i=0,j=0,k=0;
        while(i<m && j<n)
        {
            v[k++]=nums1[i]<nums2[j]?nums1[i++]:nums2[j++];
        }
        while(i<m)
        {
            v[k++]=nums1[i++];
        }
        while(j<n)
        {
            v[k++]=nums2[j++];
        }
        i=0,k=0;
        while(i<m+n)
        {
            nums1[i++]=v[k++];
        }
    }
};