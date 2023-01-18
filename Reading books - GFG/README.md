# Reading books
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Geek is at a book fair. There are total N kinds of books. He has to choose a book of a particular kind and read it loudly as many times as he can in the given time and earn points. Geek knows that reading a book of kind i once needs A<sub>i</sub> minutes and it will give him B<sub>i</sub> points. Geek has K minutes for reading books. During this time, he can only read a book of a particular kind as many times as he can so as to maximize his points. But he can not pick books of different kinds, he has to read the same book again and again. Find the maximum points Geek can get.&nbsp;</span></p>

<p><br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>
N = 3, K = 10
A = {3, 4, 5}
B = {4, 4, 5}
<strong>Output:</strong> 12
<strong>Explaination: 
</strong>If Geek picks book of first kind he can
read it 3 times, he will get 3*4 = 12 points. 
If Geek picks book of second kind he can 
read it 2 times, he will 2*4 = 8 points.
If Geek picks book of third kind he can 
read it 2 times, he will get 2*5 = 10 points.
So the maximum possible points which he 
can earn in those 10 minutes is 12.</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
You do not need to read input or print anything. Your task is to complete the function <strong>maxPoint()</strong> which takes N, K and A and B as input parameters and returns the maximum points Geek can earn.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N)<br>
<strong>Expected Auxiliary Space:</strong> O(1)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>5</sup><br>
1 ≤ K, A<sub>i</sub>, B<sub>i</sub> ≤ 10<sup>9</sup> &nbsp;</span></p>
</div>