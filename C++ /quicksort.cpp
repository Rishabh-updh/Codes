#include <iostream>
#include <vector>
using namespace std;
int position(vector<int> &nums ,int low , int high){
    int pivot  = nums[low] , i = low , j = high;
    while(i<j){
        while(nums[i]<=pivot && i<=high)
            i++;
        while(nums[j]>pivot && j>=low)
            j--;
        if(i<j) swap(nums[i],nums[j]) ;
    }
    swap(nums[low],nums[j]);
    return j ;
}
void quick_sort(vector<int> &nums , int low , int high){
    if(low>=high) return ;
    int part = position(nums,low,high);
    quick_sort(nums,low,part-1);
    quick_sort(nums,part+1,high);
}
void display(vector<int> &nums){
    for(auto in : nums)
        cout<<in<<" ";
    cout<<endl ;
}
int main() {
    vector<int> nums = {2,1,6,9,3,5,7,8};
    display(nums);
    quick_sort(nums,0,nums.size()-1);
    display(nums);
    return 0;
}