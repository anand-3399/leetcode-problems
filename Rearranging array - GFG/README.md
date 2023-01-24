# Rearranging array
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a list of integers, rearrange the list such that it consists of alternating minimum-maximum elements&nbsp;<strong>using only list operations</strong>. The first element of the list should be the minimum&nbsp;of all elements and the second element should be a maximum of all elements present in the list. Similarly, the third element will be the next minimum element and the fourth element is the next maximum element, and so on. Use of extra space is not permitted. Store the answer in the <strong>answer[]</strong> array. You don't need to print that.</span></p>

<p><span style="font-size:18px"><strong>Note : </strong>All the elements in the array are unique.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>
5
4 5 1 2 3
<strong>Output</strong>
1 5 2 4 3
</span><strong><span style="font-size:18px">Explanation:</span></strong>
<span style="font-size:18px">In the first example minimum element is 1,
maximum element is 5, second minimum is
2 and so on, thus the rearranged array is
[1, 5, 2, 4, 3]</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>
4
1 2 3 4
<strong>Output</strong>
1 4 2 3 </span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>Rearrange()</strong>&nbsp;which takes the array <strong>A[]</strong> and its size <strong>N</strong><strong> </strong>as inputs and stores the final modified list in the <strong>answer[]</strong>.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N.log(N))<br>
<strong>Expected Auxiliary Space:</strong> O(1)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>5</sup><br>
1 ≤ A[i] ≤ 10<sup>6</sup></span></p>
</div>