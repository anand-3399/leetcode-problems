# Rock Paper Scissors!
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">The RPS world championship is here. Here two players A and B play the game. You need to determine who wins.<br>
Both players can choose moves from the set {R,P,S}.<br>
The game is a draw if both players choose the same item. </span><br>
<span style="font-size:18px"><strong>The winning rules of RPS are given below:</strong></span></p>

<ul>
	<li><span style="font-size:18px">Rock crushes scissor</span></li>
	<li><span style="font-size:18px">Scissor cuts paper</span></li>
	<li><span style="font-size:18px">Paper envelops rock</span></li>
</ul>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
S = "RR"
<strong>Output:</strong> DRAW
<strong>Explanation</strong>: Both A and B chooses a Rock.
Hence, it's a draw.
</span>
</pre>

<p><span style="font-size:18px">â€‹<strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>: 
S = "RS"
<strong>Output:</strong> A
<strong>Explanation</strong>: A chose a Rock whereas B chose
a Scissor. Rock crushes the Scissor and thus, 
A wins.</span>
</pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>gameResult()&nbsp;</strong>which takes the string S as input and returns a string denoting the answer. Return "A" if A wins, "B" if B wins and "DRAW" if it's a draw.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(1).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(1).</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
|S| = 2<br>
S<sub>i</sub>&nbsp;= R/S/P</span></p>

<p>&nbsp;</p>
</div>