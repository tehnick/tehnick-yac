<div class="header">
<h1 class="title">C. Восстановить алфавит (разминка)</h1>
<table>
<tr class="time-limit">
<td class="property-title">Ограничение времени</td>
<td>1&nbsp;секунда</td>
</tr>
<tr class="memory-limit">
<td class="property-title">Ограничение памяти</td>
<td>256Mb</td>
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
<p style="text-indent: 0em;"><span style="font-weight: bold;">Решение, проходящее все тесты, будет оценено в 2 балла.</span><!--l.
50-->
</p><p style="text-indent: 0em;">Исследователи космоса в далеком 2089 году нашли и расшифровали фрагмент ДНК неизвестного
существа. Получилась последовательность <!--l. 50--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>s</mi></math>,
содержащая <!--l. 50--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>k</mi></math>
нуклеотидов. Ученые обозначили нуклеотиды заглавными буквами английского алфавита. Например, фрагмент может быть представлен
строкой <span style="font-family: monospace;">AABZC</span>&nbsp;или <span style="font-family: monospace;">BDRRDB</span>. <!--l.
52-->
</p><p style="text-indent: 0em;">Стажер Франклин предположил, что ДНК неизвестного существа имеет структуру <!--l. 52--><math
display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><msub><mrow><mi>T</mi></mrow><mrow><mn>2</mn><mn>6</mn></mrow></msub></math>,
определяемую следующим способом: </p><ul>
<li>
<!--l. 54--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><msub><mrow><mi>T</mi></mrow><mrow><mn>1</mn></mrow></msub></math>
= <span style="font-family: monospace;">a</span>, </li>
<li>
<!--l. 55--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><msub><mrow><mi>T</mi></mrow><mrow><mn>2</mn></mrow></msub></math>
= <span style="font-family: monospace;">aba</span>, </li>
<li>
<!--l. 56--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><msub><mrow><mi>T</mi></mrow><mrow><mi>i</mi></mrow></msub></math>
= <!--l. 56--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><msub><mrow><mi>T</mi></mrow><mrow><mi>i</mi><mo>−</mo><mn>1</mn></mrow></msub><msub><mrow><mi>c</mi></mrow><mrow><mi>i</mi></mrow></msub><msub><mrow><mi>T</mi></mrow><mrow><mi>i</mi><mo>−</mo><mn>1</mn></mrow></msub></math>,
где <!--l. 56--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><msub><mrow><mi>c</mi></mrow><mrow><mi>i</mi></mrow></msub></math>&nbsp;—
<!--l. 56--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>i</mi></math>-й
символ английского алфавита.</li>
</ul>
<!--l. 59-->
<p style="text-indent: 0em;">Чтобы подтвердить гипотезу, Франклину необходимо найти участок в строке <!--l. 59--><math display="inline"
style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><msub><mrow><mi>T</mi></mrow><mrow><mn>2</mn><mn>6</mn></mrow></msub></math>,
где мог бы быть расположен найденный фрагмент ДНК <!--l. 59--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>s</mi></math>.
Помогите найти позицию <!--l. 59--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>p</mi></math>
в <!--l. 59--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><msub><mrow><mi>T</mi></mrow><mrow><mn>2</mn><mn>6</mn></mrow></msub></math>
и взаимно однозначное отображение нуклеотидов в строчные буквы английского алфавита, чтобы начиная с позиции <!--l. 59--><math
display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>p</mi></math> можно было встретить
найденный фрагмент ДНК. <!--l. 61-->
</p><p style="text-indent: 0em;">Это разминочная задача, к которой мы размещаем готовое решения, чтобы вы могли познакомиться
с нашей автоматической системой проверки решений. Ввод и вывод осуществляется через файлы, либо через стандартные потоки ввода-вывода,
как вам удобнее. <!--l. 63-->
</p><p style="text-indent: 0em;">Пример решения на С++: <a href="https://pastebin.com/Kydu9Z65">https://pastebin.com/Kydu9Z65</a>.
В качестве компилятора выбирайте GNU C++ 17 7.3. </p>
<p></p>
<p></p>
<p></p>
<p></p>
<p></p>

</div>
<h2>Формат ввода</h2>
<div class="input-specification"> В первой строке записана непустая строка <!--l. 66--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>s</mi></math>
(<!--l. 66--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn> <mo>≤</mo><mo>|</mo><mi>s</mi><mo>|</mo><mo>≤</mo>
<mn>1</mn><mspace width="0.3em"><mn>0</mn><mn>0</mn><mn>0</mn><mspace width="0.3em"><mn>0</mn><mn>0</mn><mn>0</mn></mspace></mspace></math>),
состоящая из заглавных букв английского алфавита. 
</div>
<h2>Формат вывода</h2>
<div class="output-specification"> Если гипотеза Франклина неверна, выведите строку <span style="font-family: monospace;">No solution</span>. <!--l. 72-->
<p style="text-indent: 0em;">Если верна, в первой строке выведите последовательность <!--l. 72--><math display="inline" style="text-indent:
0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>r</mi></math> из 26 различных заглавных букв английского алфавита (<!--l.
72--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>r</mi><mrow><mo>[</mo><mrow><mn>1</mn></mrow><mo>]</mo></mrow></math>&nbsp;—
отображение для <span style="font-family: monospace;">a</span>, <!--l. 72--><math display="inline" style="text-indent: 0em;"
xmlns="http://www.w3.org/1998/Math/MathML"><mi>r</mi><mrow><mo>[</mo><mrow><mn>2</mn></mrow><mo>]</mo></mrow></math>&nbsp;—
отображение для <span style="font-family: monospace;">b</span>&nbsp;и&nbsp;т.&nbsp;д.), во второй строке выведите значение
<!--l. 72--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>p</mi></math>.
Если подходящих ответов несколько, то выведите ответ с минимальным значением <!--l. 72--><math display="inline" style="text-indent:
0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>p</mi></math>. </p>

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
<td><pre>BAB
</pre></td>
<td><pre>BALZKUWISPHXCQTNMGJVFRDOEY
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
<td><pre>R
</pre></td>
<td><pre>RNKIVAJGYPOBFXLTDHZEUMCSWQ
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
<td><pre>DABAE
</pre></td>
<td><pre>ABDEFJRKOTNWZIPHULXCYQGSVM
4
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
<td><pre>YTATBTATZ
</pre></td>
<td><pre>TABYZNQHGKOUXCPIJFLDREVWSM
8
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
<td><pre>ABAB
</pre></td>
<td><pre>No solution
</pre></td>
</tr>
</tbody>
</table>
