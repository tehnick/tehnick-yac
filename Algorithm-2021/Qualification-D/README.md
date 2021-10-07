<div class="header">
<h1 class="title">D. Матрица</h1>
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
<p style="text-indent: 0em;"><span style="font-weight: bold;">Решение, корректно работающее в</span> <span style="font-weight:
bold;">ограничениях</span><span style="font-weight: bold;">&nbsp;</span><!--l. 48--><math display="inline" style="text-indent:
0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn> <mo>≤</mo> <mi>n</mi><mi>m</mi> <mo>≤</mo> <msup><mrow><mn>2</mn></mrow><mrow><mn>4</mn></mrow></msup></math><span
style="font-weight: bold;">,</span> <span style="font-weight: bold;">будет оценено в 2 балла.</span><!--l. 50-->
</p><p style="text-indent: 0em;"><span style="font-weight: bold;">Полное решение будет оценено в 4 балла (включая 2 балла
за</span> <span style="font-weight: bold;">подзадачу выше).</span><!--l. 53-->
</p><p style="text-indent: 0em;">Дана матрица&nbsp;<!--l. 53--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi>
<mo>×</mo> <mi>m</mi></math>&nbsp;(<!--l. 53--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi></math>,
<!--l. 53--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>m</mi></math>&nbsp;—
степени двойки), заполненная целыми числами от <!--l. 53--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn></math>
до <!--l. 53--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi><mi>m</mi></math>
(числа по возрастанию по строкам). <!--l. 55-->
</p><p style="text-indent: 0em;">Например, для <!--l. 55--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi>
<mo>=</mo> <mn>4</mn></math> и <!--l. 55--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>m</mi>
<mo>=</mo> <mn>8</mn></math> матрица имеет следующий вид: </p><div style="margin-left: 1em; margin-right: 1em; text-align:
center;">
<!--l. 57-->
<p style="text-indent: 0em;">
<!--l. 58-->
</p><p style="text-indent: 0em;"><img alt="PIC" src="./resources/statement-image.png"></p>
<p></p>
</div>
<!--l. 61-->
<p style="text-indent: 0em;">За один шаг мы «складываем» матрицу пополам, как лист бумаги, поперек большей стороны (по горизонтали
или по вертикали) и суммируем числа, которые накладываются друг на друга, до тех пор, пока не останется один элемент. Квадрат
складываем по горизонтальной линии. <!--l. 64-->
</p><p style="text-indent: 0em;">Элементы всех полученных матриц (в том числе и исходной) выписываем в одну последовательность.
<!--l. 66-->
</p><p style="text-indent: 0em;">Найдите количество различных выписанных чисел. </p>
<p></p>
<p></p>
<p></p>
<p></p>
<p></p>
<p></p>

</div>
<h2>Формат ввода</h2>
<div class="input-specification"> В единственной строке входных данных записаны два числа <!--l. 69--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi></math>
и <!--l. 69--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>m</mi></math>&nbsp;(<!--l.
69--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn> <mo>≤</mo> <mi>n</mi>
<mo>×</mo> <mi>m</mi> <mo>≤</mo> <msup><mrow><mn>2</mn></mrow><mrow><mn>3</mn><mn>0</mn></mrow></msup></math>). Оба числа
являются степенями двойки. 
</div>
<h2>Формат вывода</h2>
<div class="output-specification"> Выведите единственное число&nbsp;— количество различных выписанных чисел. </div>
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
<td><pre>1 1
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
<td><pre>1 8
</pre></td>
<td><pre>11
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
<td><pre>4 4
</pre></td>
<td><pre>21
</pre></td>
</tr>
</tbody>
</table>
