# Strange Sort - copy
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an array A of non-negative integers.&nbsp;Sort the array in ascending order such that element at the Kth position in unsorted array stays unmoved and all other elements are sorted.&nbsp;</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 5, K = 2
arr[] = {3 12 30 79 2}
<strong>Output:</strong> 2 12 3 30 79
<strong>Explanation</strong>: The element at the 2nd 
position (12) remains at its own place 
while others are sorted.</span>
</pre>

<p><span style="font-size:18px">â€‹<strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>: 
N = 10, K = 5
arr[] = {16 16 18 10 9 22 11 5 35 22</span><span style="font-size:18px">}
<strong>Output:</strong> 5 10 11 16 9 16 18 22 22 35
<strong>Explanation</strong>: The element at the 5th 
position (9) remains at its own place
while others are sorted.</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>strangeSort()&nbsp;</strong>which takes the array A[], its size N and an integer K (1-based)&nbsp;as inputs and modifies the array such that all the elements except the one at the K-th position are sorted in non-decreasing order. The K-th position remains unchanged.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(NLogN).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(1).</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
2&lt;=N&lt;=5*10<sup>5</sup><br>
1&lt;=K&lt;=N</span></p>

<p>&nbsp;</p>
</div>