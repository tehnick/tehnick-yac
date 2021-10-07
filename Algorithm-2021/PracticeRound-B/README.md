<div class="header">
<h1 class="title">B. Тестирование функции (разминка)</h1>
<table>
<tr class="time-limit">
<td class="property-title">Ограничение времени</td>
<td>3&nbsp;секунды</td>
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
<div class="legend"><span style="font-weight: bold;">Решение, проходящее все тесты первой группы, будет оценено в 1</span> <span style="font-weight:
bold;">балл.</span><!--l. 49-->
<p style="text-indent: 0em;"><span style="font-weight: bold;">Решение, проходящее все тесты, будет оценено в 3 балла, т.е.
в 2</span> <span style="font-weight: bold;">дополнительных балла.</span><!--l. 51-->
</p><p style="text-indent: 0em;">Чтобы написать тест, нужно проверить результат работы функции, которая возвращает массив.
Известен канонический результат, однако функция не обязана выдавать в точности его. Результат функции правильный, если он
может быть получен из канонического выполнением любого числа, возможно нулевого, следующих операций: </p><ol style="list-style-type:
decimal;">
<li>Переставить любые два элемента массива. </li>
<li>Добавить ко всем элементам массива одно и то же число. </li>
<li>Умножить все элементы массива на одно и то же ненулевое число.</li>
</ol>
<!--l. 58-->
<p style="text-indent: 0em;">Определите, правильный ли результат работы функции. <!--l. 60-->
</p><p style="text-indent: 0em;">Это разминочная задача, к которой мы размещаем готовое решения, чтобы вы могли познакомиться
с нашей автоматической системой проверки решений. Ввод и вывод осуществляется через файлы, либо через стандартные потоки ввода-вывода,
как вам удобнее. <!--l. 62-->
</p><p style="text-indent: 0em;">Пример решения на С++: <a href="https://pastebin.com/aBLx9RNK">https://pastebin.com/aBLx9RNK</a>.
. В качестве компилятора выбирайте GNU C++ 14 4.9. </p>
<p></p>
<p></p>
<p></p>
<p></p>

</div>
<h2>Формат ввода</h2>
<div class="input-specification"> В первой строке задано число тестов <!--l. 65--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>T</mi></math>
(<!--l. 65--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn> <mo>≤</mo>
<mi>T</mi> <mo>≤</mo> <mn>1</mn><mn>0</mn><mn>0</mn><mn>0</mn></math>). В следующих строках идут описания <!--l. 65--><math
display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>T</mi></math> тестов. <!--l. 67-->
<p style="text-indent: 0em;">В первой строке теста задана длина <!--l. 67--><math display="inline" style="text-indent: 0em;"
xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math> (<!--l. 67--><math display="inline" style="text-indent: 0em;"
xmlns="http://www.w3.org/1998/Math/MathML"><mn>0</mn> <mo>≤</mo> <mi>N</mi> <mo>≤</mo> <mn>1</mn><mn>0</mn><mn>0</mn><mspace
width="0.3em"><mn>0</mn><mn>0</mn><mn>0</mn></mspace></math>) канонического результата. В следующей строке заданы <!--l. 67--><math
display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math> элементов канонического
результата <!--l. 67--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><msub><mrow><mi>a</mi></mrow><mrow><mi>i</mi></mrow></msub></math>
(<!--l. 67--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"> <mo>−</mo> <mn>1</mn><mspace
width="0.3em"><mn>0</mn><mn>0</mn><mn>0</mn><mspace width="0.3em"><mn>0</mn><mn>0</mn><mn>0</mn><mspace width="0.3em"><mn>0</mn><mn>0</mn><mn>0</mn>
<mo>≤</mo> <msub><mrow><mi>a</mi></mrow><mrow><mi>i</mi></mrow></msub> <mo>≤</mo> <mn>1</mn><mspace width="0.3em"><mn>0</mn><mn>0</mn><mn>0</mn><mspace
width="0.3em"><mn>0</mn><mn>0</mn><mn>0</mn><mspace width="0.3em"><mn>0</mn><mn>0</mn><mn>0</mn></mspace></mspace></mspace></mspace></mspace></mspace></math>).
За ними в следующей строке задана длина <!--l. 67--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>M</mi></math>
(<!--l. 67--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>0</mn> <mo>≤</mo>
<mi>M</mi> <mo>≤</mo> <mn>1</mn><mn>0</mn><mn>0</mn><mspace width="0.3em"><mn>0</mn><mn>0</mn><mn>0</mn></mspace></math>)
результата функции. После чего в следующей строке заданы <!--l. 67--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>M</mi></math>
элементов результата функции <!--l. 67--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><msub><mrow><mi>b</mi></mrow><mrow><mi>i</mi></mrow></msub></math>
(<!--l. 67--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"> <mo>−</mo> <mn>1</mn><mspace
width="0.3em"><mn>0</mn><mn>0</mn><mn>0</mn><mspace width="0.3em"><mn>0</mn><mn>0</mn><mn>0</mn><mspace width="0.3em"><mn>0</mn><mn>0</mn><mn>0</mn>
<mo>≤</mo> <msub><mrow><mi>b</mi></mrow><mrow><mi>i</mi></mrow></msub> <mo>≤</mo> <mn>1</mn><mspace width="0.3em"><mn>0</mn><mn>0</mn><mn>0</mn><mspace
width="0.3em"><mn>0</mn><mn>0</mn><mn>0</mn><mspace width="0.3em"><mn>0</mn><mn>0</mn><mn>0</mn></mspace></mspace></mspace></mspace></mspace></mspace></math>).
<!--l. 69-->
</p><p style="text-indent: 0em;">Суммарный размер длин всех массивов не превосходит <!--l. 69--><math display="inline" style="text-indent:
0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn><mspace width="0.3em"><mn>0</mn><mn>0</mn><mn>0</mn><mspace width="0.3em"><mn>0</mn><mn>0</mn><mn>0</mn></mspace></mspace></math>.
<!--l. 71-->
</p><p style="text-indent: 0em;">Все числа целые. </p>
<p></p>
<p></p>

</div>
<h2>Формат вывода</h2>
<div class="output-specification"> Для каждого из <!--l. 74--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>T</mi></math>
тестов выведите на отдельной строке <span style="font-family: monospace;">YES</span>, если функция вернула правильный результат,
и <span style="font-family: monospace;">NO</span>&nbsp;в противном случае. 
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
<td><pre>6
2
1 2
2
3 5
4
1 2 3 3
4
7 7 3 5
3
1 2 3
3
5 8 3
2
1 2
2
0 0
0

0

3
1 2 3
4
1 2 3 4
</pre></td>
<td><pre>YES
YES
NO
NO
YES
NO
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
<td><pre>4
3
2 4 6
3
0 2 1
3
2 4 8
3
2 5 11
3
2 4 8
3
2 8 11
4
1 2 2 4
4
1 2 4 4
</pre></td>
<td><pre>YES
YES
YES
NO
</pre></td>
</tr>
</tbody>
</table>
<h2>Примечания</h2>
<div class="notes"> В первой группе тестов, если результат правильный, то при приведении его к каноническому результату можно добавлять и умножать
только на целые числа. 
</div>
