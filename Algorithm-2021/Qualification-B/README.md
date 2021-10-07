<div class="header">
<h1 class="title">B. Плитки 2x2</h1>
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
<p style="text-indent: 0em;"><span style="font-weight: bold;">Решение, корректно работающее с картиной и плитками, покрашенными</span>
<span style="font-weight: bold;">в белый и черный цвета, будет оценено в 2 балла.</span><!--l. 50-->
</p><p style="text-indent: 0em;"><span style="font-weight: bold;">Полное решение, корректно работающее с картиной и плитками,</span>
<span style="font-weight: bold;">покрашенными в белый, черный и красный цвета, будет оценено в 3</span> <span style="font-weight:
bold;">балла (включая 2 балла за подзадачу выше).</span><!--l. 52-->
</p><p style="text-indent: 0em;">Дан набор плиток <!--l. 52--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>2</mn>
<mo>×</mo> <mn>2</mn></math>. У каждой плитки четыре квадрата покрашены в один из трех цветов: белый <span style="font-family:
monospace;">(W)</span>, черный <span style="font-family: monospace;">(B) </span>или красный <span style="font-family: monospace;">(R)</span>.
<!--l. 54-->
</p><p style="text-indent: 0em;">Определите, можно ли из набора плиток составить пиксельную картину <!--l. 54--><math display="inline"
style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi> <mo>×</mo> <mi>m</mi></math> (стороны картины
имеют четный размер), если плитки при выкладывании не должны перекрываться и не могут выходить за пределы картины. При выкладывании
плитки можно поворачивать, но нельзя ломать. <!--l. 56-->
</p><p style="text-indent: 0em;">Плитка непрозрачная, и краска нанесена только с одной стороны плитки. </p>
<p></p>
<p></p>
<p></p>
<p></p>

</div>
<h2>Формат ввода</h2>
<div class="input-specification">
<!--l. 61-->
<p style="text-indent: 0em;">В первой строке дано число <!--l. 61--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>k</mi></math>&nbsp;(<!--l.
61--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn> <mo>≤</mo> <mi>k</mi>
<mo>≤</mo> <mn>1</mn><msup><mrow><mn>0</mn></mrow><mrow><mn>5</mn></mrow></msup></math>)&nbsp;— количество плиток в наборе.
<!--l. 63-->
</p><p style="text-indent: 0em;">В следующих <!--l. 63--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>2</mn><mi>k</mi></math>
строках даны описания плиток. Описание каждой плитки занимает две строки по два символа, они задают цвета квадратов плитки.
<!--l. 65-->
</p><p style="text-indent: 0em;">Далее даны два числа <!--l. 65--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi></math>
и <!--l. 65--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>m</mi></math>&nbsp;(<!--l.
65--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>2</mn> <mo>≤</mo> <mi>n</mi><mo>,</mo><mi>m</mi>
<mo>≤</mo> <mn>5</mn><mn>1</mn><mn>2</mn></math>, <!--l. 65--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi></math>
и <!--l. 65--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>m</mi></math>
четные)&nbsp;— размеры картины. В каждой из следующих <!--l. 66--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi></math>
строк дано описание очередного ряда картины. <!--l. 68-->
</p><p style="text-indent: 0em;">При описании плиток и пикселей картины используются только символы <span style="font-family:
monospace;">W</span>, <span style="font-family: monospace;">B </span>и <span style="font-family: monospace;">R</span>. </p>
<p></p>
<p></p>
<p></p>

</div>
<h2>Формат вывода</h2>
<div class="output-specification"> В единственной строке выведите <span style="font-family: monospace;">Yes</span>, если из набора плиток можно собрать картину,
иначе выведите <span style="font-family: monospace;">No</span>. 
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
<td><pre>1
WW
BW
2 2
WB
WW
</pre></td>
<td><pre>Yes
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
<td><pre>2
WW
BB
WB
WB
2 4
WBBW
WBBW
</pre></td>
<td><pre>Yes
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
<td><pre>3
WW
WW
WW
WW
BB
BB
4 2
WW
BB
BB
WW
</pre></td>
<td><pre>No
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
<td><pre>4
WW
WB
WW
WB
WW
WB
WW
WB
2 2
BB
BB
</pre></td>
<td><pre>No
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
<td><pre>2
BW
WB
BW
WB
2 2
WW
BB
</pre></td>
<td><pre>No
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
<td><pre>4
RR
RR
WW
WW
BB
BB
WW
WW
4 4
WWBB
WWBB
RRWW
RRWW
</pre></td>
<td><pre>Yes
</pre></td>
</tr>
</tbody>
</table>
<h3>Пример 7</h3>
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
RW
RB
2 2
RB
RW
</pre></td>
<td><pre>No
</pre></td>
</tr>
</tbody>
</table>
<h2>Примечания</h2>
<div class="notes">
<!--l. 75-->
<p style="text-indent: 0em;">В первом и втором примерах необходимо повернуть имеющиеся плитки. <!--l. 77-->
</p><p style="text-indent: 0em;">В третьем примере можно было бы собрать картину, если бы было разрешено выкладывать плитки
поверх размещенных. <!--l. 79-->
</p><p style="text-indent: 0em;">В четвертом примере можно было бы собрать картину, если бы было разрешено ломать плитки или
выходить за пределы картины. </p>
<p></p>
<p></p>

</div>
