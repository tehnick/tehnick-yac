<div class="header">
<h1 class="title">C. Шары и коробки</h1>
<table>
<tr class="time-limit">
<td class="property-title">Ограничение времени</td>
<td>2&nbsp;секунды</td>
</tr>
<tr class="memory-limit">
<td class="property-title">Ограничение памяти</td>
<td>1Gb</td>
</tr>
<tr class="input-file">
<td class="property-title">Ввод</td>
<td colspan="1">стандартный ввод или input.txt</td>
</tr>
<tr class="output-file">
<td class="property-title">Вывод</td>
<td colspan="1">стандартный вывод или output.txt</td>
</tr>
</table>
</div>
<h2></h2>
<div class="legend">
<!--l. 48-->
<p style="text-indent: 0em;"><span style="font-weight: bold;">Полное решение будет оценено в 4 балла.</span><!--l. 51-->
</p><p style="text-indent: 0em;">Есть цветные шарики <!--l. 51--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>k</mi></math>
цветов (<!--l. 51--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><msub><mrow><mi>a</mi></mrow><mrow><mi>i</mi></mrow></msub></math>
шариков цвета <!--l. 51--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>i</mi></math>).
Нужно разложить все шарики в коробки с выполнением следующих условий: </p><ul>
<li>во всех коробках должно совпадать суммарное количество шариков; </li>
<li>в каждой коробке шариков цвета&nbsp;<!--l. 54--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>i</mi></math>
должно быть не менее <!--l. 54--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><msub><mrow><mi>b</mi></mrow><mrow><mi>i</mi></mrow></msub></math>
(<!--l. 54--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>0</mn> <mo>≤</mo>
<msub><mrow><mi>b</mi></mrow><mrow><mi>i</mi></mrow></msub> <mo>≤</mo> <msub><mrow><mi>a</mi></mrow><mrow><mi>i</mi></mrow></msub></math>).</li>
</ul>
<!--l. 57-->
<p style="text-indent: 0em;">Максимизируйте количество коробок, в которые будут разложены шарики. </p>
<p></p>
<p></p>

</div>
<h2>Формат ввода</h2>
<div class="input-specification">
<!--l. 62-->
<p style="text-indent: 0em;">Первая строка входных данных содержит число <!--l. 62--><math display="inline" style="text-indent:
0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>k</mi></math> (<!--l. 62--><math display="inline" style="text-indent:
0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn> <mo>≤</mo> <mi>k</mi> <mo>≤</mo> <mn>1</mn><msup><mrow><mn>0</mn></mrow><mrow><mn>5</mn></mrow></msup></math>)&nbsp;—
число цветов. <!--l. 64-->
</p><p style="text-indent: 0em;">Во второй строке дано <!--l. 64--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>k</mi></math>
чисел <!--l. 64--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><msub><mrow><mi>a</mi></mrow><mrow><mi>i</mi></mrow></msub></math>
(<!--l. 64--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn> <mo>≤</mo>
<msub><mrow><mi>a</mi></mrow><mrow><mi>i</mi></mrow></msub> <mo>≤</mo> <mn>1</mn><msup><mrow><mn>0</mn></mrow><mrow><mn>5</mn></mrow></msup></math>,
<!--l. 64--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><msubsup><mrow><mo>
∑</mo><!--nolimits--></mrow><mrow><mi>i</mi><mo>=</mo><mn>1</mn></mrow><mrow><mi>k</mi></mrow></msubsup><msub><mrow><mi>a</mi></mrow><mrow><mi>i</mi></mrow></msub>
<mo>≤</mo> <mn>1</mn><msup><mrow><mn>0</mn></mrow><mrow><mn>5</mn></mrow></msup></math>)&nbsp;— количество шариков цвета <!--l.
64--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>i</mi></math>. <!--l.
66-->
</p><p style="text-indent: 0em;">В третьей строке дано <!--l. 66--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>k</mi></math>
чисел <!--l. 66--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><msub><mrow><mi>b</mi></mrow><mrow><mi>i</mi></mrow></msub></math>
(<!--l. 66--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>0</mn> <mo>≤</mo>
<msub><mrow><mi>b</mi></mrow><mrow><mi>i</mi></mrow></msub> <mo>≤</mo> <msub><mrow><mi>a</mi></mrow><mrow><mi>i</mi></mrow></msub></math>)&nbsp;—
нижнее ограничение на количество шариков в каждой коробке. </p>
<p></p>
<p></p>

</div>
<h2>Формат вывода</h2>
<div class="output-specification">
<!--l. 72-->
<p style="text-indent: 0em;">В первой строке выведите два числа: <!--l. 72--><math display="inline" style="text-indent: 0em;"
xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi></math>&nbsp;— количество коробок, которые можно наполнить, и <!--l.
72--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>m</mi></math> &nbsp;—
количество шариков в каждой коробке. <!--l. 74-->
</p><p style="text-indent: 0em;">Далее выведите <!--l. 74--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi></math>
строк по <!--l. 74--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>m</mi></math>
чисел в каждой&nbsp;— цвета шариков, которые лежат в очередной коробке. <!--l. 76-->
</p><p style="text-indent: 0em;">Суммарное количество шариков цвета <!--l. 76--><math display="inline" style="text-indent:
0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>i</mi></math> во всех коробках должно быть равно <!--l. 76--><math display="inline"
style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><msub><mrow><mi>a</mi></mrow><mrow><mi>i</mi></mrow></msub></math>.
</p>
<p></p>
<p></p>

</div>
<h3>Пример 1</h3>
<table class="sample-tests">
<thead>
<tr>
<th>Ввод</th>
<th>Вывод</th>
</tr>
</thead>
<tbody>
<tr>
<td><pre>5
1 2 3 4 5
1 2 3 4 5
</pre></td>
<td><pre>1 15
1 2 2 3 3 3 4 4 4 4 5 5 5 5 5 
</pre></td>
</tr>
</tbody>
</table>
<h3>Пример 2</h3>
<table class="sample-tests">
<thead>
<tr>
<th>Ввод</th>
<th>Вывод</th>
</tr>
</thead>
<tbody>
<tr>
<td><pre>1
10
0
</pre></td>
<td><pre>10 1
1 
1 
1 
1 
1 
1 
1 
1 
1 
1 
</pre></td>
</tr>
</tbody>
</table>
<h3>Пример 3</h3>
<table class="sample-tests">
<thead>
<tr>
<th>Ввод</th>
<th>Вывод</th>
</tr>
</thead>
<tbody>
<tr>
<td><pre>5
4 5 5 5 5
1 1 1 1 1
</pre></td>
<td><pre>4 6
1 2 3 4 5 5 
1 2 3 4 5 4 
1 2 3 4 5 3 
1 2 3 4 5 2 
</pre></td>
</tr>
</tbody>
</table>
<h2>Примечания</h2>
<div class="notes">
<!--l. 81-->
<p style="text-indent: 0em;">В первом примере все шарики первого цвета должны находиться в одной коробке. <!--l. 83-->
</p><p style="text-indent: 0em;">Во втором примере любое количество шариков может быть в одной коробке, поэтому можно положить
в каждую коробку по одному шарику. <!--l. 85-->
</p><p style="text-indent: 0em;">В третьем примере нельзя использовать более четырех коробок, так как шариков первого цвета
всего четыре. </p>
<p></p>
<p></p>

</div>
