# Ordering of strings
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:20px"><span style="font-family:arial,helvetica,sans-serif">You will be given <strong>N</strong> number of strings. You have to find the lexicographically smallest string and the lexicographically largest string among these strings.</span></span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 3
strings = a , ab , abc
<strong>Output:</strong> a abc
<strong>Explanation</strong>: Lexicographically smallest is
"a" and lexicographically largest is
"abc".</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 2
strings = abc , abc
<strong>Output:</strong> abc abc
<strong>Explanation</strong>: Lexicographically smallest is
"abc" and lexicographically largest is
"abc"</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task: &nbsp;</strong><br>
You dont need to read input or print anything. Complete the function&nbsp;<strong>orderStringâ€‹</strong><strong>()</strong>&nbsp;which takes a 2d character array and an integer <strong>N</strong> as&nbsp;input parameter and returns an array of size 2&nbsp;where first value&nbsp;should be lexicographically smallest string and second value should be lexicographically largest string.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(N* max of all string length ).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(1).</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N , length of each string &lt;= 10<sup>3</sup></span></p>

<p>&nbsp;</p>
</div>