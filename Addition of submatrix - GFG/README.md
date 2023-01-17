# Addition of submatrix
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a matrix <strong>Arr</strong> of size <strong>N</strong> x <strong>M</strong>. You are given position of submatrix as <strong>X<sub>1</sub>, Y<sub>1</sub></strong> and <strong>X<sub>2</sub>, Y<sub>2</sub></strong> inside the matrix. Find the sum of all elements inside that submatrix. Here&nbsp;<strong>X<sub>1</sub>, Y<sub>1</sub>,</strong>&nbsp;<strong>X<sub>2</sub>, Y<sub>2</sub>&nbsp;</strong>are 1-based.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: 
</strong>N = 5 , M = 6
Arr[][] = {{1, 2, 3, 4, 5, 6},
           {7, 8, 9, 10, 11, 12},
           {13, 14, 15, 16, 17, 18},
           {19, 20, 21, 22, 23, 24},
           {25, 26, 27, 28, 29, 30}}
X<sub>1</sub>=3, Y<sub>1</sub>=4, X<sub>2</sub>=4, Y<sub>2</sub>=5
<strong>Output:</strong> 78
<strong>Explanation:</strong> Sum from cell starting at
position (3, 4) (1-based indexing) and 
ending at (4, 5) is 78.
</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong> 
N = 3, M = 3
Arr[][] = {{9, 8, 7},{4, 2, 1},{6, 5, 3}}
X<sub>1</sub>=1, Y<sub>1</sub>=2, X<sub>2</sub>=3, Y<sub>2</sub>=3
<strong>Output:</strong> 26
<strong>Explanation:</strong> Sum from cell starting at
position (1, 2) (1-based indexing) and 
ending at (3, 3) is 26.
</span></pre>

<p><span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>subMatrixSum()</strong>&nbsp;which takes the array of booleans&nbsp;<strong>arr[][],</strong><strong>&nbsp;n,</strong>&nbsp;<strong>m, x1, y1, x2 </strong>and<strong> y2</strong>&nbsp;as parameters and returns an integer denoting the answer.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N*M)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N, M ≤ 10<sup>3</sup><br>
1 ≤ Arr[N][M] ≤ 10<sup>6</sup><br>
1 &lt;= X<sub>1</sub>, X<sub>2&nbsp;</sub>&lt;= N<br>
1 &lt;= Y<sub>1</sub>, Y<sub>2&nbsp;</sub>&lt;= M</span></p>

<p>&nbsp;</p>
</div>