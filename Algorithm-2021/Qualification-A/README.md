<div class="header">
<h1 class="title">A. НольОдин</h1>
<table>
<tr class="time-limit">
<td class="property-title">Ограничение времени</td>
<td>1&nbsp;секунда</td>
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
<p style="text-indent: 0em;"><span style="font-weight: bold;">Полное решение будет оценено в 2 балла.</span><!--l. 50-->
</p><p style="text-indent: 0em;">Сравните два числа в двоичной системе счисления. Числа представлены последовательностью слов
без пробелов, обозначающих цифры (0&nbsp;— <span style="font-family: monospace;">zero</span>, 1&nbsp;— <span style="font-family:
monospace;">one</span>). </p>
<p></p>

</div>
<h2>Формат ввода</h2>
<div class="input-specification">
<!--l. 55-->
<p style="text-indent: 0em;">Первая строка содержит запись первого числа&nbsp;<!--l. 55--><math display="inline" style="text-indent:
0em;" xmlns="http://www.w3.org/1998/Math/MathML"><msub><mrow><mi>s</mi></mrow><mrow><mn>1</mn></mrow></msub></math>&nbsp;(<!--l.
55--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>3</mn> <mo>≤</mo><mo>|</mo><msub><mrow><mi>s</mi></mrow><mrow><mn>1</mn></mrow></msub><mo>|</mo><mo>≤</mo>
<mn>1</mn><mn>0</mn><mn>0</mn><mn>0</mn></math>). <!--l. 57-->
</p><p style="text-indent: 0em;">Вторая строка содержит запись второго числа <!--l. 57--><math display="inline" style="text-indent:
0em;" xmlns="http://www.w3.org/1998/Math/MathML"><msub><mrow><mi>s</mi></mrow><mrow><mn>2</mn></mrow></msub></math>&nbsp;(<!--l.
57--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>3</mn> <mo>≤</mo><mo>|</mo><msub><mrow><mi>s</mi></mrow><mrow><mn>2</mn></mrow></msub><mo>|</mo><mo>≤</mo>
<mn>1</mn><mn>0</mn><mn>0</mn><mn>0</mn></math>). <!--l. 59-->
</p><p style="text-indent: 0em;">Числа не содержат лидирующих нулей. </p>
<p></p>
<p></p>

</div>
<h2>Формат вывода</h2>
<div class="output-specification"> Выведите символ <span style="font-family: monospace;">&gt; (ASCII 62)</span>, если первое число больше второго, символ <span
style="font-family: monospace;">&lt;</span> <span style="font-family: monospace;">(ASCII 60)</span>, если второе число больше
первого, иначе выведите символ <span style="font-family: monospace;">= (ASCII</span> <span style="font-family: monospace;">61)
</span>. 
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
<td><pre>oneone
onezerozero
</pre></td>
<td><pre>&lt;
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
<td><pre>zero
zero
</pre></td>
<td><pre>=
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
<td><pre>onezero
oneone
</pre></td>
<td><pre>&lt;
</pre></td>
</tr>
</tbody>
</table>
<h3>Пример 4</h3>
<table class="sample-tests">
<thead>
<tr>
<th>Ввод</th>
<th>Вывод</th>
</tr>
</thead>
<tbody>
<tr>
<td><pre>oneonezerozero
onezeroonezero
</pre></td>
<td><pre>&gt;
</pre></td>
</tr>
</tbody>
</table>
<h3>Пример 5</h3>
<table class="sample-tests">
<thead>
<tr>
<th>Ввод</th>
<th>Вывод</th>
</tr>
</thead>
<tbody>
<tr>
<td><pre>one
zero
</pre></td>
<td><pre>&gt;
</pre></td>
</tr>
</tbody>
</table>
<h3>Пример 6</h3>
<table class="sample-tests">
<thead>
<tr>
<th>Ввод</th>
<th>Вывод</th>
</tr>
</thead>
<tbody>
<tr>
<td><pre>one
one
</pre></td>
<td><pre>=
</pre></td>
</tr>
</tbody>
</table>
