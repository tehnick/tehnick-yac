 <div class="header">
<h1 class="title">E. Сортировка матрицы</h1>
<table>
<tr>
<th>Язык</th>
<th>Ограничение времени</th>
<th>Ограничение памяти</th>
<th>Ввод</th>
<th>Вывод</th>
</tr>
<tr>
<td width="1%">Все языки</td>
<td>2&nbsp;секунды</td>
<td>1Gb</td>
<td rowspan="7">стандартный ввод или input.txt</td>
<td rowspan="7">стандартный вывод или output.txt</td>
</tr>
<tr>
<td>
<nobr>Python 3.7.3</nobr>
</td>
<td>7&nbsp;секунд</td>
<td>1Gb</td>
</tr>
<tr>
<td>
<nobr>Python 3.7 (PyPy 7.3.3)</nobr>
</td>
<td>7&nbsp;секунд</td>
<td>1Gb</td>
</tr>
<tr>
<td>
<nobr>C# (MS .Net 5.0)+ASP</nobr>
</td>
<td>3&nbsp;секунды</td>
<td>1Gb</td>
</tr>
<tr>
<td>
<nobr>Kotlin 1.4.30 (JRE 11)</nobr>
</td>
<td>3&nbsp;секунды</td>
<td>1Gb</td>
</tr>
<tr>
<td>
<nobr>OpenJDK Java 11</nobr>
</td>
<td>3&nbsp;секунды</td>
<td>1Gb</td>
</tr>
<tr>
<td>
<nobr>Golang 1.16</nobr>
</td>
<td>3&nbsp;секунды</td>
<td>1Gb</td>
</tr>
</table>
</div>
<h2></h2>
<div class="legend">
<!--l. 48-->
<p style="text-indent: 0em;"><span style="font-weight: bold;">Решение, корректно работающее в</span> <span style="font-weight:
bold;">ограничениях</span><span style="font-weight: bold;">&nbsp;</span><!--l. 48--><math display="inline" style="text-indent:
0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn> <mo>≤</mo> <mi>n</mi><mo>,</mo><mi>m</mi> <mo>≤</mo> <mn>1</mn><mn>0</mn></math><span
style="font-weight: bold;">,</span> <span style="font-weight: bold;">будет оценено в 2 балла.</span><!--l. 50-->
</p><p style="text-indent: 0em;"><span style="font-weight: bold;">Полное решение будет оценено в 6 баллов (включая 2 балла
за</span> <span style="font-weight: bold;">подзадачу выше).</span><!--l. 52-->
</p><p style="text-indent: 0em;">Дана матрица <!--l. 52--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi>
<mo>×</mo> <mi>m</mi></math>, состоящая из нулей и единиц. За один ход можно выбрать любую пару ячеек и обменять значения
в этих ячейках. <!--l. 55-->
</p><p style="text-indent: 0em;">Нужно за минимальное количество ходов получить матрицу, в которой будут выполнены оба условия:
</p><ul>
<li>в каждой строке сначала идут нули, а потом единицы (строка может содержать только нули или только единицы); </li>
<li>в каждом столбце сначала идут нули, а потом единицы (столбец может содержать только нули или только единицы).</li>
</ul>
<p></p>
<p></p>
<p></p>
<p></p>

</div>
<h2>Формат ввода</h2>
<div class="input-specification"> В первой строке даны два числа <!--l. 64--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi></math>
и <!--l. 64--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>m</mi></math>
(<!--l. 64--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn> <mo>≤</mo>
<mi>n</mi><mo>,</mo><mi>m</mi> <mo>≤</mo> <mn>1</mn><mn>0</mn><mn>0</mn></math>)&nbsp;— размеры матрицы. В последующих <!--l.
64--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi></math> строках
заданы по <!--l. 64--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>m</mi></math>
символов, каждый из которых <!--l. 64--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>0</mn></math>
или <!--l. 64--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn></math>.

</div>
<h2>Формат вывода</h2>
<div class="output-specification">
<!--l. 69-->
<p style="text-indent: 0em;">Выведите целое число&nbsp;— минимальное количество обменов, для получения необходимой матрицы.
</p>

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
<td><pre>2 2
10
00
</pre></td>
<td><pre>1
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
<td><pre>4 4
1000
0000
0000
0011
</pre></td>
<td><pre>1
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
<td><pre>4 3
011
000
000
100
</pre></td>
<td><pre>2
</pre></td>
</tr>
</tbody>
</table>
<h2>Примечания</h2>
<div class="notes">
<!--l. 74-->
<p style="text-indent: 0em;">В первом примере единицу из первой позиции первой строки следует поменять с нулем из второй позиции
второй строки. <!--l. 76-->
</p><p style="text-indent: 0em;">Во втором примере единицу из первой позиции первой строки можно поменять местами с последним
нулем из третьей строки или вторым нулем из последней строки. <!--l. 78-->
</p><p style="text-indent: 0em;">В третьем примере единицы из первой строки следует поменять местами с нулями из последней
строки. </p>
<p></p>
<p></p>

</div>
