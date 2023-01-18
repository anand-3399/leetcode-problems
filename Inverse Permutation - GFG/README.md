# Inverse Permutation
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an array <strong>A</strong> of size <strong>n</strong> of integers in the range from 1 to n, we need to find the inverse permutation of that array.<br>
<strong>Inverse Permutation</strong>&nbsp;is a permutation which you will get by inserting position of an element at the position specified by the element value in the array. For better understanding, consider the following example:<br>
Suppose we found element 4 at position 3 in an array, then in reverse permutation, we insert 3 (position of element 4 in the array) in position 4 (element value).</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 4
Arr[] = {1, 4, 3, 2}
<strong>Output:</strong>
1 4 3 2
<strong>Explanation:</strong>
For element 1 we insert position of 1 from
arr1 i.e 1 at position 1 in arr2. For element
4 in arr1, we insert 2 from arr1 at position
4 in arr2. Similarly, for element 2 in arr1,
we insert position of 2 i.e 4 in arr2.</span></pre>

<p><br>
<span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 5
Arr[] = {2, 3, 4, 5, 1}
<strong>Output:</strong>
5 1 2 3 4
<strong>Explanation:</strong>
As index 1 has value 2 so 1 will b 
placed at index 2, similarly 2 has
3 so 2 will be placed at index 3
similarly 3 has 4 so placed at 4,
4 has 5 so 4 placed at 5 and 5 
has 1 so placed at index 1. </span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>inversePermutation()</strong>&nbsp;which takes the array <strong>Arr[]</strong> and its size <strong>N </strong>as inputs and returns the vector array after performing inverse permutation on <strong>Arr.</strong></span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N)<br>
<strong>Expected Auxiliary Space:</strong> O(N)</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>5</sup><br>
1 ≤ A[i] ≤ N<br>
<strong>Note: </strong>Array should contain unique elements and should<br>
&nbsp; have all elements from 1 to N. </span></p>
</div>