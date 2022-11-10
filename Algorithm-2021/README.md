# Yandex Cup, Algorithm 2021

## Practice round

- [x] [A. Робот-секретарь (разминка)](#PracticeRound-A)
- [x] [B. Тестирование функции (разминка)](#PracticeRound-B)
- [ ] [C. Восстановить алфавит (разминка)](#PracticeRound-C)

## Qualification

- [x] [A. НольОдин](#Qualification-A)
- [ ] [B. Плитки 2x2](#Qualification-B)
- [ ] [C. Шары и коробки](#Qualification-C)
- [ ] [D. Матрица](#Qualification-D)
- [ ] [E. Сортировка матрицы](#Qualification-E)
- [ ] [F. Переворот пути](#Qualification-F)

На решение отводится 2 часа.

<hr>

<div class="header">
<h1 class="title" id="PracticeRound-A">A. Робот-секретарь (разминка)</h1>
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
<div class="legend"><span style="font-weight: bold;">Решение, проходящее все тесты, будет оценено в 2 балла.</span><!--l. 49-->
<p style="text-indent: 0em;">Настя любит программировать и увлекается старой компьютерной техникой. Однажды она увидела в
музее Яндекса робота для набора текста на печатной машинке. Настя захотела проверить, насколько оптимально работает робот.
<!--l. 51-->
</p><p style="text-indent: 0em;">Клавиатура печатной машинки состоит из 26 клавиш английского алфавита, клавиши пробела и
клавиши Shift, которая изменяет регистр следующей набранной буквы на противоположный текущему. Двойное же нажатие на клавишу
Shift изменяет текущий регистр машинки. В начале работы регистр всегда нижний, то есть при наборе без клавиши Shift будут
печататься строчные буквы. Пробел одинаково набирается в обоих регистрах. <!--l. 53-->
</p><p style="text-indent: 0em;">Настя хочет понять, за какое минимальное количество нажатий можно набрать текст, чтобы сравнить
это с результатами робота. <!--l. 55-->
</p><p style="text-indent: 0em;">Это разминочная задача, к которой мы размещаем готовое решения, чтобы вы могли познакомиться
с нашей автоматической системой проверки решений. Ввод и вывод осуществляется через файлы, либо через стандартные потоки ввода-вывода,
как вам удобнее. <!--l. 57-->
</p><p style="text-indent: 0em;">Пример решения на С++: <a href="./examples/PracticeRound-A.cpp">PracticeRound-A.cpp</a>.
В качестве компилятора выбирайте GNU C++ 14 4.9. </p>
<p></p>
<p></p>
<p></p>
<p></p>

</div>
<h2>Формат ввода</h2>
<div class="input-specification"> Входные данные&nbsp;– строка <!--l. 60--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>s</mi></math>
(<!--l. 60--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn> <mo>≤</mo><mo>|</mo><mi>s</mi><mo>|</mo><mo>≤</mo>
<mn>1</mn><mn>0</mn><mn>0</mn><mspace width="0.3em"><mn>0</mn><mn>0</mn><mn>0</mn></mspace></math>), состоящая из прописных
и строчных букв английского алфавита, а также символа пробела. 
</div>
<h2>Формат вывода</h2>
<div class="output-specification"> Выведите единственное число&nbsp;— минимальное количество нажатий, необходимое, чтобы напечатать данную строку. </div>
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
<td><pre>Hello World
</pre></td>
<td><pre>13
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
<td><pre>APPLE II
</pre></td>
<td><pre>10
</pre></td>
</tr>
</tbody>
</table>


<hr>

<div class="header">
<h1 class="title" id="PracticeRound-B">B. Тестирование функции (разминка)</h1>
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
</p><p style="text-indent: 0em;">Пример решения на С++: <a href="./examples/PracticeRound-B.cpp">PracticeRound-B.cpp</a>.
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


<hr>

<div class="header">
<h1 class="title" id="PracticeRound-C">C. Восстановить алфавит (разминка)</h1>
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
</p><p style="text-indent: 0em;">Пример решения на С++: <a href="./examples/PracticeRound-C.cpp">PracticeRound-C.cpp</a>.
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


<hr>

<div class="header">
<h1 class="title" id="Qualification-A">A. НольОдин</h1>
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


<hr>

<div class="header">
<h1 class="title" id="Qualification-B">B. Плитки 2x2</h1>
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


<hr>

<div class="header">
<h1 class="title" id="Qualification-C">C. Шары и коробки</h1>
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


<hr>

<div class="header">
<h1 class="title" id="Qualification-D">D. Матрица</h1>
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
</p><p style="text-indent: 0em;"><img alt="PIC" src="./resources/Qualification-D_0.png"></p>
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


<hr>

 <div class="header">
<h1 class="title" id="Qualification-E">E. Сортировка матрицы</h1>
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


<hr>

<div class="header">
<h1 class="title" id="Qualification-F">F. Переворот пути</h1>
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
0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi> <mo>≤</mo> <mn>2</mn><mn>0</mn><mn>0</mn><mn>0</mn></math><span
style="font-weight: bold;">,</span> <span style="font-weight: bold;">будет оценено в 2 балла.</span><!--l. 50-->
</p><p style="text-indent: 0em;"><span style="font-weight: bold;">Решение, корректно работающее для случая, когда максимальная</span>
<span style="font-weight: bold;">степень вершины не превосходит 2, будет оценено в 2 балла.</span><!--l. 52-->
</p><p style="text-indent: 0em;"><span style="font-weight: bold;">Полное решение будет оценено в 7 баллов (включая 4 балла
за</span> <span style="font-weight: bold;">подзадачи выше).</span><!--l. 55-->
</p><p style="text-indent: 0em;">Дано дерево из <!--l. 55--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi></math>
вершин. В нем выбрали две случайные различные вершины <!--l. 55--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>p</mi></math>
и <!--l. 55--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>q</mi></math>
(каждая пара вершин могла быть выбрана с одинаковой вероятностью) и перевернули путь между ними со всеми внутренними отростками,
не включая отростки от самих <!--l. 55--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>p</mi></math>
и <!--l. 55--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>q</mi></math>
(смотрите примеры для лучшего понимания). <!--l. 57-->
</p><p style="text-indent: 0em;">Найдите математическое ожидание расстояния между вершинами 1 и <!--l. 57--><math display="inline"
style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi></math>. </p>
<p></p>
<p></p>
<p></p>
<p></p>

</div>
<h2>Формат ввода</h2>
<div class="input-specification">
<!--l. 62-->
<p style="text-indent: 0em;">В первой строке дано целое число <!--l. 62--><math display="inline" style="text-indent: 0em;"
xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi></math> (<!--l. 62--><math display="inline" style="text-indent: 0em;"
xmlns="http://www.w3.org/1998/Math/MathML"><mn>2</mn> <mo>≤</mo> <mi>n</mi> <mo>≤</mo> <mn>2</mn><mn>0</mn><mn>0</mn><mspace
width="0.3em"><mn>0</mn><mn>0</mn><mn>0</mn></mspace></math>)&nbsp;— количество вершин в дереве. <!--l. 64-->
</p><p style="text-indent: 0em;">В следующих <!--l. 64--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi>
<mo>−</mo> <mn>1</mn></math> строках даны два числа <!--l. 64--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><msub><mrow><mi>u</mi></mrow><mrow><mi>i</mi></mrow></msub></math>,
<!--l. 64--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><msub><mrow><mi>v</mi></mrow><mrow><mi>i</mi></mrow></msub></math>
(<!--l. 64--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn> <mo>≤</mo>
<msub><mrow><mi>u</mi></mrow><mrow><mi>i</mi></mrow></msub><mo>,</mo><msub><mrow><mi>v</mi></mrow><mrow><mi>i</mi></mrow></msub>
<mo>≤</mo> <mi>n</mi><mo>,</mo><msub><mrow><mi>u</mi></mrow><mrow><mi>i</mi></mrow></msub><mo>≠</mo><msub><mrow><mi>v</mi></mrow><mrow><mi>i</mi></mrow></msub></math>)&nbsp;—
ребра дерева. </p>
<p></p>

</div>
<h2>Формат вывода</h2>
<div class="output-specification"> Выведите целое число&nbsp;— математическое ожидание расстояния между вершинами 1 и <!--l. 68--><math display="inline" style="text-indent:
0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi></math>, умноженное на <!--l. 68--><math display="inline" style="text-indent:
0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mfrac><mrow><mi>n</mi><mrow><mo>(</mo><mrow><mi>n</mi><mo>−</mo><mn>1</mn></mrow><mo>)</mo></mrow></mrow>
<mrow><mn>2</mn></mrow></mfrac> </math>. 
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
<td><pre>4
1 2
2 3
3 4
</pre></td>
<td><pre>12
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
1 2
2 3
2 4
</pre></td>
<td><pre>10
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
<td><pre>4
1 4
2 4
3 4
</pre></td>
<td><pre>8
</pre></td>
</tr>
</tbody>
</table>
<h2>Примечания</h2>
<div class="notes">
<!--l. 73-->
<p style="text-indent: 0em;">Предположим, изначально дерево выглядело так: <!--l. 75-->
</p><p style="text-indent: 0em;"><img alt="PIC" src="./resources/Qualification-F_0.png"><!--l.
77-->
</p><p style="text-indent: 0em;">Если <!--l. 77--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>p</mi>
<mo>=</mo> <mn>3</mn></math>, <!--l. 77--><math display="inline" style="text-indent: 0em;" xmlns="http://www.w3.org/1998/Math/MathML"><mi>q</mi>
<mo>=</mo> <mn>6</mn></math>, то после переворота оно преобразуется в следующее дерево: <!--l. 79-->
</p><p style="text-indent: 0em;"><img alt="PIC" src="./resources/Qualification-F_1.png"><!--l.
81-->
</p><p style="text-indent: 0em;">Обратите внимание, что ребро 4–9 осталось, так как это внутренний отросток на пути между
3 и 6. <!--l. 83-->
</p><p style="text-indent: 0em;">Но ребра 1–3 и 2–3 преобразовались в 1–6 и 2–6, так же как и ребра 6–7 и 6–8 преобразовались
в 3–7 и 3–8 соответственно. </p>
<p></p>
<p></p>
<p></p>
<p></p>
<p></p>

</div>


<hr>

