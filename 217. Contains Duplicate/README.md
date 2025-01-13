# 217. Contains Duplicate

## Description

Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.


 <p>&nbsp;</p>


<p><strong class="example">Example 1:</strong></p>
<pre>
<strong>Input:</strong> nums = [1,2,3,1]
<strong>Output:</strong> true
<strong>Explanation:</strong> The element 1 occurs at the indices 0 and 3.


</pre>

<p><strong class="example">Example 2:</strong></p>
<pre>
<strong>Input:</strong> nums = [1,2,3,4]
<strong>Output:</strong> false
</pre>

</pre>

<p><strong class="example">Example 3:</strong></p>
<pre>
<strong>Input:</strong> nums = [1,1,1,3,3,4,3,2,4,2]
<strong>Output:</strong> true
</pre>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>

<ul>
  <li><code>1 &lt;= nums.length &lt;= 10<sup>5</sup></code></li>
	<li><code>-10<sup>9</sup> &lt;= nums[i] &lt;= 10<sup>9</sup></code></li>
</ul>

<p>&nbsp;</p>

<!-- description:end -->

## Solution 
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
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == nums[i-1]){
                return true;
            }
        }

        return false;
       
    }
};

```

<!-- tabs:end -->

<!-- solution:end -->

<!-- problem:end -->
