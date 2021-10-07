<div class="header">
<h1 class="title">B. Палеты</h1>
<table>
<thead>
<th></th>
<th>Все языки</th>
<th>Python 3.7 + network + requests</th>
</thead>
<tr class="time-limit">
<td class="property-title">Ограничение времени</td>
<td>3&nbsp;секунды</td>
<td>6&nbsp;секунд</td>
</tr>
<tr class="memory-limit">
<td class="property-title">Ограничение памяти</td>
<td>256Mb</td>
<td>256Mb</td>
</tr>
<tr class="input-file">
<td class="property-title">Ввод</td>
<td colspan="2">стандартный ввод или input.txt</td>
</tr>
<tr class="output-file">
<td class="property-title">Вывод</td>
<td colspan="2">стандартный вывод или output.txt</td>
</tr>
</table>
</div>
<h2></h2>
<div class="legend"> Поставки товаров прибывают в распределительный центр, хранятся там и затем отправляются на склады. Каждая поставка состоит
из множества палет и коробок (возможно, пустого). Все палеты и коробки имеют <!--l. 47--><math display="inline" style="text-indent:
0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>d</mi><mi>e</mi><mi>l</mi><mi>i</mi><mi>v</mi><mi>e</mi><mi>r</mi><msub><mrow><mi>y</mi></mrow><mrow><mi>i</mi><mi>d</mi></mrow></msub></math>&nbsp;—
идентификатор поставки. <!--l. 50-->
<p style="text-indent: 0em;">Палеты и коробки имеют поле <!--l. 50--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>p</mi><mi>a</mi><mi>r</mi><mi>e</mi><mi>n</mi><msub><mrow><mi>t</mi></mrow><mrow><mi>i</mi><mi>d</mi></mrow></msub></math>&nbsp;—
это идентификатор палеты или коробки, в которую вложена данная. Если <!--l. 50--><math display="inline" style="text-indent:
0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>p</mi><mi>a</mi><mi>r</mi><mi>e</mi><mi>n</mi><msub><mrow><mi>t</mi></mrow><mrow><mi>i</mi><mi>d</mi></mrow></msub>
<mo>=</mo> <mn>0</mn></math>, то это палета, иначе&nbsp;— коробка. Отправлять на склад можно только палеты. Чтобы палеты и
коробки можно было отправить на склад, должны выполняться следующие условия: </p><ul>
<li>Коробку, не размещенную в палете или другой коробке, отправлять нельзя; </li>
<li>Если существует коробка, которая еще не пришла от поставщиков или которую нельзя отправить, то нельзя отправить на склад
и коробку или палету, в которую она вложена.</li>
</ul>
<!--l. 57-->
<p style="text-indent: 0em;">Зная, что в данный момент прибыли только поставки с определенными номерами, определите, какие
палеты возможно отправить на склад уже сейчас. </p>
<p></p>

</div>
<h2>Формат ввода</h2>
<div class="input-specification"> В первой строке задано одно целое число <!--l. 61--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi></math>
(<!--l. 61--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn> <mo>≤</mo>
<mi>n</mi> <mo>≤</mo> <mn>1</mn><msup><mrow><mn>0</mn></mrow><mrow><mn>6</mn></mrow></msup></math>)&nbsp;— общее количество
палет и коробок. <!--l. 63-->
<p style="text-indent: 0em;">Во второй строке записано <!--l. 63--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi></math>
целых чисел <!--l. 63--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>d</mi><mi>e</mi><mi>l</mi><mi>i</mi><mi>v</mi><mi>e</mi><mi>r</mi><msub><mrow><mi>y</mi></mrow><mrow><mi>i</mi><mi>d</mi></mrow></msub></math>
(<!--l. 63--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn> <mo>≤</mo>
<mi>d</mi><mi>e</mi><mi>l</mi><mi>i</mi><mi>v</mi><mi>e</mi><mi>r</mi><msub><mrow><mi>y</mi></mrow><mrow><mi>i</mi><mi>d</mi></mrow></msub>
<mo>≤</mo> <mn>1</mn><msup><mrow><mn>0</mn></mrow><mrow><mn>9</mn></mrow></msup></math>)&nbsp;— идентификаторы поставки. <!--l.
65-->
</p><p style="text-indent: 0em;">В третьей строке записано <!--l. 65--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi></math>
целых чисел <!--l. 65--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>p</mi><mi>a</mi><mi>r</mi><mi>e</mi><mi>n</mi><msub><mrow><mi>t</mi></mrow><mrow><mi>i</mi><mi>d</mi></mrow></msub></math>
(<!--l. 65--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>0</mn> <mo>≤</mo>
<mi>p</mi><mi>a</mi><mi>r</mi><mi>e</mi><mi>n</mi><msub><mrow><mi>t</mi></mrow><mrow><mi>i</mi><mi>d</mi></mrow></msub> <mo>≤</mo>
<mi>n</mi></math>)&nbsp;— номера коробок, в которые должна быть вложена палета или другая коробка. Коробка не может быть вложена
сама в себя (в том числе через другие коробки). Если <!--l. 65--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>p</mi><mi>a</mi><mi>r</mi><mi>e</mi><mi>n</mi><msub><mrow><mi>t</mi></mrow><mrow><mi>i</mi><mi>d</mi></mrow></msub>
<mo>=</mo> <mn>0</mn></math>, то это палета и ее никуда класть не нужно. <!--l. 67-->
</p><p style="text-indent: 0em;">В четвертой строке задано единственное целое число <!--l. 67--><math display="inline" style="text-indent:
0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>k</mi></math> (<!--l. 67--><math display="inline" style="text-indent:
0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>0</mn> <mo>≤</mo> <mi>k</mi> <mo>≤</mo> <mi>n</mi></math>)&nbsp;— количество
поставок, которые еще не приехали в распределительный центр. <!--l. 69-->
</p><p style="text-indent: 0em;">При <!--l. 69--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>k</mi>
<mo>≥</mo> <mn>1</mn></math> в последней строке записано <!--l. 69--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>k</mi></math>
целых чисел <!--l. 69--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><msub><mrow><mi>a</mi></mrow><mrow><mi>i</mi></mrow></msub></math>
(<!--l. 69--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn> <mo>≤</mo>
<msub><mrow><mi>a</mi></mrow><mrow><mi>i</mi></mrow></msub> <mo>≤</mo> <mn>1</mn><msup><mrow><mn>0</mn></mrow><mrow><mn>9</mn></mrow></msup></math>)&nbsp;—
идентификаторы поставок, палеты и коробки из которых не были доставлены в распределительный центр. Гарантируется, что хотя
бы одна палета или коробка имела такой идентификатор <!--l. 69--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><msub><mrow><mi>a</mi></mrow><mrow><mi>i</mi></mrow></msub></math>.
</p>
<p></p>
<p></p>
<p></p>

</div>
<h2>Формат вывода</h2>
<div class="output-specification"> В первой строке выведите одно целое число <!--l. 72--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>m</mi></math>&nbsp;—
количество палет, которые можно отправить на склад. <!--l. 74-->
<p style="text-indent: 0em;">Во второй строке выведите номера палет от меньшего к большему. </p>

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
1 1 1 2 2
0 1 1 0 4
1
2
</pre></td>
<td><pre>1
1 
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
<td><pre>5
1 1 2 2 2
0 1 1 0 4
1
2
</pre></td>
<td><pre>0
</pre></td>
</tr>
</tbody>
</table>
