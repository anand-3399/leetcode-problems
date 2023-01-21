# Merging two unsorted arrays in sorted order
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">GIven two different arrays <strong>A</strong> and <strong>B</strong> of size <strong>N</strong> and <strong>M</strong>, the task is to merge the two arrays which are unsorted into another array which is sorted.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>N = 3, M = 3
A[] = {10, 5, 15}
B[] = {20, 3, 2}
<strong>Output:</strong> 2 3 5 10 15 20
<strong>Explanation</strong>: After merging both the 
array's and sorting it with get the 
desired output.  
</span></pre>

<p><br>
<span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>N = 4, M = 3
A[] = {1, 10, 5, 15}
B[] = {20, 0, 2}
<strong>Output:</strong> 0 1 2 5 10 15 20
</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
This is a function problem. You don't need to take any input, as it is already accomplished by the driver code. You just need to complete the function <strong>sortedMerge</strong>() that takes array<strong> A, </strong>array<strong> B, </strong>array<strong> res,&nbsp;</strong>integer<strong> N, </strong>and integer<strong> M</strong>&nbsp;as parameters and stores&nbsp;merged and sorted array in array <strong>res</strong>.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O (NlogN&nbsp;+ MlogM&nbsp;+ (N&nbsp;+ M))<br>
<strong>Expected Auxiliary Space:</strong> O(N+M).</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N, M ≤ 10<sup>5</sup></span></p>
</div>