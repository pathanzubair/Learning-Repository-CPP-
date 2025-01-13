# 33. Search in Rotated Sorted Array

## Description

There is an integer array nums sorted in ascending order (with distinct values).

Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].

Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

You must write an algorithm with O(log n) runtime complexity.
 <p>&nbsp;</p>


<p><strong class="example">Example 1:</strong></p>
<pre>
<strong>Input:</strong> nums = [4,5,6,7,0,1,2], target = 0
<strong>Output:</strong> 4
</pre>

<p><strong class="example">Example 2:</strong></p>
<pre>
<strong>Input:</strong> nums = [4,5,6,7,0,1,2], target = 3
<strong>Output:</strong> -1
</pre>

<p><strong class="example">Example 3:</strong></p>
<pre>
<strong>Input:</strong> nums = [1], target = 0
<strong>Output:</strong> -1
</pre>
<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 5000</code></li>
  <li><code>-10<sup>4</sup> &lt;= nums[i] &lt;= 10<sup>4</sup></code></li>
	<li><code>All values of <code>nums</code> are <b>unique</b>.</code></li>
 	<li><code>nums is an ascending array that is possibly rotated.</code></li>
  <li><code>-10<sup>4</sup> &lt;= target &lt;= 10<sup>4</sup></code></li>

</ul>

<p>&nbsp;</p>

<!-- description:end -->

## Solutions
### C++

<!-- solution:start -->
```cpp
int speedup =[]{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    return 0;
}();

class Solution {
public:
    int search(vector<int>& nums, int target) {

        int start = 0;
        int end = nums.size() -1;

        while(start <= end){
            int mid = (end+start)/2;

            if(nums[mid] == target){
                return mid;
            }

            if(nums[start] <= nums[mid]){
                if(target >= nums[start] && target <= nums[mid]){
                    end = mid - 1;
                }
                else{
                    start = mid + 1;
                }
            }
            else{
                if(nums[mid] <= target && target <= nums[end]){
                    start = mid + 1;
                }
                else{
                    end = mid - 1;
                }
            }
        }

        return -1;
        
    }
};

```

<!-- tabs:end -->

<!-- solution:end -->

<!-- problem:end -->
