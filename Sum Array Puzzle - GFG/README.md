# Sum Array Puzzle
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an array <strong>A</strong> of size <strong>N</strong>, construct a Sum Array <strong>S</strong>(of same size) such that<strong> </strong>S is equal to the sum of all the elements of <strong>A</strong> except A[i]. Your task is to complete the function <strong>SumArray(A, N)</strong> which accepts the array A and N(size of array). </span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong></span>
<span style="font-size:18px">5
3 6 4 8 9</span>
<span style="font-size:18px"><strong>Output:</strong> 27 24 26 22 21</span>
<span style="font-size:18px"><strong>Explanation:</strong> For the sum array S, at i=0 we
have 6+4+8+9. At i=1, 3+4+8+9. At i=2, we 
have 3+6+8+9. At i=3, we have 3+6+4+9. At
i = 4, we have 3+6+4+8. So S is 27 24 26 22 21.</span></pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong></span>
<span style="font-size:18px">6</span>
<span style="font-size:18px">4 5 7 3 10 1</span>
<span style="font-size:18px"><strong>Output:</strong> </span><span style="font-size:18px">26 25 23 27 20 29</span> </pre>

<p><span style="font-size:18px"><strong>User Task:</strong><br>
Since this is a functional problem you did not have to worry about the input and output. You just have to complete the function <strong>SumArray() </strong>by storing arr[i]=S-arr[i]</span></p>

<p><span style="font-size:18px"><strong>Constraint :</strong></span><br>
<span style="font-size:18px">1 &lt;= T &lt;= 10<br>
1 &lt;= N &lt;= 10<sup>4</sup><br>
1 &lt;= A<sub>i</sub> &lt;= 10<sup>4</sup></span></p>
</div>