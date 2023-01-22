# Closing bracket index
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a string with brackets ('[' and ']') and the index of an opening bracket. Find the index of the corresponding closing bracket.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
S = "[ABC[23]][89]"
pos = 0
<strong>Output:</strong> 8
<strong>Explanation</strong>: <strong>[</strong>ABC[23]<strong>]</strong>[89]
The closing bracket corresponding to the
opening bracket at index 0 is at index 8.
</span>
</pre>

<p><span style="font-size:18px">â€‹<strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>: 
S = "ABC[58]"
pos = 3
<strong>Output:</strong> 6
<strong>Explanation</strong>: ABC<strong>[</strong>58<strong>]
</strong>The closing bracket corresponding to the
opening bracket at index 3 is at index 6.</span>
</pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>closing()</strong>&nbsp;which takes a string <strong>S</strong> and a position&nbsp;<strong>pos&nbsp;</strong>as inputs and returns the index of the closing bracket corresponding to the opening bracket at index&nbsp;<strong>pos</strong>.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(|S|).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(1).</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N &lt;= 2*10<sup>5</sup></span></p>

<p>&nbsp;</p>
</div>